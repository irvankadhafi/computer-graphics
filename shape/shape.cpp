//
// Created by irvan on 11/18/20.
//
#include "shape.h"
void segiEmpat(float P[][2]){
    //Sisi Atas
    drawLine(P[0][0], P[0][1], P[1][0], P[1][1]);

    //Sisi Bawah
    drawLine(P[2][0], P[2][1], P[3][0], P[3][1]);

    //Sisi Kiri
    drawLine(P[0][0], P[0][1], P[2][0], P[2][1]);

    //Sisi Kanan
    drawLine(P[1][0], P[1][1], P[3][0], P[3][1]);
}