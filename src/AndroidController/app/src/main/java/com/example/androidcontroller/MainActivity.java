package com.example.androidcontroller;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView txtLevel;
    private TextView txtPoints;
    private TextView txtLives;
    private EditText txtIP;

    private int level;
    private int points;
    private int lives;

    private TextView txtTest;

    public String move;

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