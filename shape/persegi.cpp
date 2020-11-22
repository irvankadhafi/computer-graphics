//
// Created by irvan on 11/16/20.
//

#include "shape.h"
void drawPersegi(int x, int y, int panjang, int lebar, bool rotate, int colors)
{
    int angle;
    float persegi[][2] = {
            {(float)x,            (float)y},
            {(float)x+panjang,       (float)y},
            {(float)x,            (float)y+lebar},
            {(float)x+panjang,       (float)y+lebar}
    };
    if(rotate){
        cout<<"Enter sudut : ";
        cin>>angle;
        rotasiGaris(persegi,(sizeof(persegi)/sizeof(persegi[0])),angle,true);
    }
    segiEmpat(persegi);
}