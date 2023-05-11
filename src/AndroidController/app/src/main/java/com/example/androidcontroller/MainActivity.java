package com.example.androidcontroller;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.hardware.*;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity  {

    private TextView txtLevel, txtPoints, txtLives, txtTest;

    private int level, points, lives;

    private EditText txtIP;

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
}