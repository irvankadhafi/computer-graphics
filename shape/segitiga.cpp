//
// Created by irvan on 11/19/20.
//
#include "shape.h"
#include "../transformation/transformation.h"
void drawSegitigaSiku(int x, int y, int alas, int tinggi, bool rotate, int colors)
{
    int angle;
    float shape[][2] = {
            {(float)x,         (float)y},
            {(float)x,         (float)y+tinggi},
            {(float)x+alas,    (float)y+tinggi}
    };
    if(rotate){
        cout<<"Enter sudut : ";
        cin>>angle;
        rotasiGaris(shape,(sizeof(shape)/sizeof(shape[0])),angle,true);
    }

    //tinggi
    drawLine(shape[0][0], shape[0][1], shape[1][0], shape[1][1]);

    //alas
    drawLine(shape[1][0], shape[1][1], shape[2][0], shape[2][1]);

    //garis miring
    drawLine(shape[0][0], shape[0][1], shape[2][0], shape[2][1]);
}
void drawSegitigaSamaSisi(int x, int y, int sisi){
    float lines[2][2] = {
            {(float)x, (float)y},
            {(float)(x+sisi), (float)y}
    };
    float tempLines[2][2];
    memcpy(tempLines, lines, sizeof(tempLines));
    drawLine(lines[0][0], lines[0][1], lines[1][0], lines[1][1]);
    rotasiGaris(tempLines,2,60,false);
    drawLine(tempLines[0][0], tempLines[0][1], tempLines[1][0], tempLines[1][1]);
    drawLine(tempLines[1][0], tempLines[1][1], lines[1][0], lines[1][1]);

}