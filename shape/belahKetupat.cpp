//
// Created by irvan on 11/16/20.
//
#include "shape.h"
void drawBelahKetupat(int x, int y, int d1, int d2,bool rotate, int colors){
    int angle;
    float P[][2] = {
            {(float)x,            (float)y},
            {(float)x+d1,         (float)y-d2},
            {(float)x+d1,         (float)y+d2},
            {(float)x+d1+d1,       (float)y}
    };
    if(rotate){
        cout<<"Enter sudut : ";
        cin>>angle;
        rotasiGaris(P,(sizeof(P)/sizeof(P[0])),angle,true);
    }
    segiEmpat(P);
//    //bagian kiri
//    // Garis Pertama
//    drawLine(P[0][0], P[0][1], P[1][0], P[1][1]);
//    //Garis Kedua
//    drawLine(P[0][0], P[0][1], P[2][0], P[2][1]);
//    //bagian kanan
//    drawLine(P[1][0], P[1][1], P[3][0], P[3][1]);
//    drawLine(P[2][0], P[2][1], P[3][0], P[3][1]);
}