package com.example.androidcontroller;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.hardware.*;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity implements SensorEventListener {

    private TextView txtLevel, txtPoints, txtLives, txtTest;

    private int level, points, lives;

    private EditText txtIP;

    public String move = "";

    @SuppressLint("MissingInflatedId")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        SensorManager sensorManager = (SensorManager) getBaseContext().getSystemService(Context.SENSOR_SERVICE);
        Sensor sensor = sensorManager.getDefaultSensor(Sensor.TYPE_ACCELEROMETER);
        sensorManager.registerListener(this, sensor, SensorManager.SENSOR_DELAY_FASTEST);

        level = 1;
        points = 250;
        lives = 3;

        txtLevel = findViewById(R.id.txtLevel);
        txtPoints = findViewById(R.id.txtPoints);
        txtLives = findViewById(R.id.txtLives);
        txtTest = findViewById(R.id.txtTest);
        txtIP = findViewById(R.id.editTxtIP);

    }

    public void moveUp(View view){
        move = "W";
        txtTest.setText(move);
        move = "";
    }

    public void moveDown(View view){
        move = "S";
        txtTest.setText(move);
        move = "";
    }

    public void moveLeft(View view){
        move = "A";
        txtTest.setText(move);
        move = "";
    }

    public void moveRight(View view){
        move = "D";
        txtTest.setText(move);
        move = "";
    }
    @Override
    public void onSensorChanged(SensorEvent sensorEvent) {
        float X = sensorEvent.values[0], Z = sensorEvent.values[2];
        if(X > 15){
            move = "S";
            txtTest.setText(move);
            move = "";
        } else if(X < -15){
            move = "W";
            txtTest.setText(move);
            move = "";
        }
        if(Z > 15){
            move = "A";
            txtTest.setText(move);
            move = "";
        } else if(Z < -15){
            move = "D";
            txtTest.setText(move);
            move = "";
        }
    }

    @Override
    public void onAccuracyChanged(Sensor sensor, int i) {

    }
}