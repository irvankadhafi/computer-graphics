//
// Created by irvan on 11/18/20.
//
#include "shape.h"
void drawTrapesiumSiku(int x, int y, int a, int b, int height, bool rotate, int colors)
{
    int angle;
    float shape[][2] = {
            {(float)x,         (float)y},
            {(float)x+a,       (float)y},
            {(float)x,         (float)y+height},
            {(float)x+b,       (float)y+height}
    };
    if(rotate){
        cout<<"Enter sudut : ";
        cin>>angle;
        rotasiGaris(shape,(sizeof(shape)/sizeof(shape[0])),angle,true);
    }
    segiEmpat(shape);
}
