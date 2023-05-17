package com.example.androidcontroller;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.content.Context;
import android.hardware.*;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Inet4Address;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Collections;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class MainActivity extends AppCompatActivity {
    TextView txtLevel, txtPoints, txtLives, txtTest, txtIPTest;
    EditText editIP;
    Button btnConnect;
    private int level, points, lives;
    public String move = "";

    private Socket socket;
    private BufferedReader input;
    private PrintWriter output;

    private String SERVER_IP;
    private int SERVER_PORT;

    boolean pulsado;

    static String[] ips;

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        level = 1;
        points = 250;
        lives = 3;

        txtLevel = findViewById(R.id.txtLevel);
        txtPoints = findViewById(R.id.txtPoints);
        txtLives = findViewById(R.id.txtLives);
        txtTest = findViewById(R.id.txtTest);
        btnConnect = findViewById(R.id.btnConnect);
        editIP = findViewById(R.id.editIP);
        txtIPTest = findViewById(R.id.txtIPTest);

        SensorManager sm = (SensorManager) getSystemService(Context.SENSOR_SERVICE); //Accesa a los sensores
        Sensor s = sm.getDefaultSensor(Sensor.TYPE_ACCELEROMETER); //Accede al acelerometro (giroscopio)
        if (s == null){
            System.out.println("El celular no posee el sensor");
        }

        //Generated code for accelerometer sensor
        SensorEventListener event = new SensorEventListener() {
            @Override
            public void onSensorChanged(SensorEvent _event) {
                float X = _event.values[0], Z = _event.values[2];
                if (X < -5) {
                    move = "D";
                    txtTest.setText(move);
                } else if (X > 5) {
                    move = "A";
                    txtTest.setText(move);
                } else if (Z < -5) {
                    move = "S";
                    txtTest.setText(move);
                } else if (Z > 5) {
                    move = "W";
                    txtTest.setText(move);
                }
            }

            @Override
            public void onAccuracyChanged(Sensor sensor, int i) {

            }
        };

        sm.registerListener(event, s, SensorManager.SENSOR_DELAY_GAME);

        Refresh();

        btnConnect.setOnClickListener(view -> {
            SERVER_IP = editIP.getText().toString();
            if(isValidIPv4(SERVER_IP)) {
                txtIPTest.setText("Direccion IP valida");
                EnviarInfo();
            } else {
                NoValidIP();
            }
        });
    }

    public void moveUp(View view){
        move = "W";
        txtTest.setText(move);
    }

    public void moveDown(View view){
        move = "S";
        txtTest.setText(move);
    }

    public void moveLeft(View view){
        move = "A";
        txtTest.setText(move);
    }

    public void moveRight(View view){
        move = "D";
        txtTest.setText(move);
    }

    private void NoValidIP() {
        txtIPTest.setText("Dirección IP no valida");
        new Thread(() -> {
            try {
                Thread.sleep(2500);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }).start();
    }

    private void Refresh() {
        new Thread(this::getNetworkIPs).start();

        pulsado = false;
        SERVER_PORT = 5001;
        SERVER_IP = "";
    }

    private void EnviarInfo(){
        new Thread(() -> {
           String a = "";
           try {
           socket = new Socket(SERVER_IP, SERVER_PORT);
           input = new BufferedReader(new InputStreamReader(socket.getInputStream()));
           output = new PrintWriter(socket.getOutputStream(), true);

           String message = "Hola, soy Android. \n Estoy enviando un mensaje a C++";
           output.printf(message);
           Log.d("Enviado", message);

           String response = input.readLine();
           Log.d("Respuesta", response);

           } catch (IOException e) {
               Log.d("NO SE PUDO ENVIAR", "");
               e.printStackTrace();
           }
        }).start();
    }

    private static boolean isValidIPv4(String ip) {
        Pattern pattern = Pattern.compile("^([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\." +
                "([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\." +
                "([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\." +
                "([01]?\\d\\d?|2[0-4]\\d|25[0-5])$");
        Matcher matcher = pattern.matcher(ip);
        return matcher.matches();
    }

    public void getNetworkIPs() {
        byte[] ip = new byte[4];
        final StringLinkedList list = new StringLinkedList();
        try {
            List<NetworkInterface> interfaces = Collections.list(NetworkInterface.getNetworkInterfaces());
            for(NetworkInterface intf : interfaces) {
                List<InetAddress> addrs = Collections.list(intf.getInetAddresses());
                for(InetAddress addr : addrs) {
                    if (!addr.isLoopbackAddress() && addr instanceof Inet4Address) {
                        ip = ipv4toBytes(addr.getHostAddress());
                        Log.d("HOST IP ADDRESS", addr.getHostAddress());
                    }
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
            return;
        }

        final byte[] ipFinal = ip;
        try {
            String ipID = InetAddress.getByAddress(ipFinal).toString().substring(1);
            ipID = ipID.substring(0, ipID.lastIndexOf(".")+1) + 'X';
            editIP.setText(ipID);
        } catch (UnknownHostException e) {
            throw new RuntimeException();
        }
    }

    public byte[] ipv4toBytes(String ipv4) throws IllegalArgumentException {
        String[] octets = ipv4.split("\\.");
        if(octets.length != 4){
            throw new IllegalArgumentException("Invalid IPv4 address format");
        }
        byte[] bytes = new byte[4];
        for(int i = 0; i < 4; i++){
            int octet = Integer.parseInt(octets[i]);
            if(octet < 0 || octet > 255) {
                throw new IllegalArgumentException("Invalid octet value: " + octet);
            }
            bytes[i] = (byte) octet;
        }
        return bytes;
    }

    public void onBackPressed(){
        AlertDialog.Builder builder = new AlertDialog.Builder(this);
        builder.setCancelable(false);
        builder.setMessage("You want to log out from app?");
        builder.setPositiveButton("Yes", (dialog, which) -> finish());
        builder.setNegativeButton("No", (dialog, which) -> dialog.cancel());
        AlertDialog alert = builder.create();
        alert.show();
    }
}