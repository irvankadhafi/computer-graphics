//
// Created by irvan on 11/16/20.
//
#include "shape.h"
void drawJajarGenjang(int x, int y, int panjang, int tinggi, bool rotate, int colors)
{
    int angle;
    float offset = tinggi/2;
    float jajarGenjang[][2] = {
            {(float)x,                   (float)y},
            {(float)x+panjang,           (float)y},
            {(float)x+offset,            (float)y+tinggi},
            {(float)x+offset+panjang,    (float)y+tinggi}
    };
    if(rotate){
        cout<<"Enter sudut : ";
        cin>>angle;
        rotasiGaris(jajarGenjang,(sizeof(jajarGenjang)/sizeof(jajarGenjang[0])),angle,true);
    }
    segiEmpat(jajarGenjang);
}
