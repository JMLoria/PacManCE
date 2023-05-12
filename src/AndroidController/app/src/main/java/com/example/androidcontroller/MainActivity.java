package com.example.androidcontroller;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.content.Context;
import android.hardware.*;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private TextView txtLevel, txtPoints, txtLives, txtTest;

    private int level, points, lives;

    private EditText editIP;

    public String move = "";

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
        editIP = findViewById(R.id.editIP);

        SensorManager sm = (SensorManager) getSystemService(Context.SENSOR_SERVICE); //Accesa a los sensores
        Sensor s = sm.getDefaultSensor(Sensor.TYPE_ACCELEROMETER); //Accede al acelerometro (giroscopio)
        if (s == null){
            System.out.println("El celular no posee el sensor");
        }

        //Codigo que se genera por el evento del acelerometro
        SensorEventListener event = new SensorEventListener() {
            @Override
            public void onSensorChanged(SensorEvent _event) {
                //Codigo que se genera por el evento del acelerometro
                float X = _event.values[0], Z = _event.values[2];
                if (X < -4) {
                    move = "D";
                    txtTest.setText(move);
                } else if (X > 4) {
                    move = "A";
                    txtTest.setText(move);
                } else if (Z < -4) {
                    move = "S";
                    txtTest.setText(move);
                } else if (Z > 4) {
                    move = "W";
                    txtTest.setText(move);
                }
            }

            @Override
            public void onAccuracyChanged(Sensor sensor, int i) {

            }
        };

        sm.registerListener(event, s, SensorManager.SENSOR_DELAY_GAME);
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
}