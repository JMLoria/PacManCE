package com.example.androidcontroller;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private TextView txtLevel;
    private TextView txtPoints;
    private TextView txtLives;

    private int level;
    private int points;
    private int lives;

    private TextView txtTest;

    public String move;

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