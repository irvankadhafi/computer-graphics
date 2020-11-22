//
// Created by irvan on 11/19/20.
//
#include "shape.h"
void pixelLingkaran(int x0, int x, int y0, int y)
{
    putpixel(x0 + x, y0 + y, 1);
    putpixel(x0 + y, y0 + x, 2);
    putpixel(x0 - y, y0 + x, 3);
    putpixel(x0 - x, y0 + y, 4);
    putpixel(x0 - x, y0 - y, 5);
    putpixel(x0 - y, y0 - x, 6);
    putpixel(x0 + y, y0 - x, 7);
    putpixel(x0 + x, y0 - y, 8);
}
void drawLingkaran(int x0, int y0, int radius, int jenis)
{
    float dx = 1, dy = 1;
    float x = radius - 1, y = 0;
    float error = dx - (radius << 1);
    for(int i=0;(x >= y);i++)
    {
        switch (jenis) {
            case 1: //Solid
                pixelLingkaran(x0,x,y0,y);
                break;
            case 2: // Dash
                if(i%9<6){
                    pixelLingkaran(x0,x,y0,y);
                }
                break;
            case 3: //dotted
                if(i%9<0.5){
                    pixelLingkaran(x0,x,y0,y);
                }
                break;
            case 4: //Dashed Dotted
                if(i%9<2){

                }
                else if(i%9<6){
                    pixelLingkaran(x0,x,y0,y);
                }
                else if(i%9==7){

                }
                else{
                    pixelLingkaran(x0,x,y0,y);
                }
        }
        if(error > 0)
        {
            x = x - 1;
            dx = dx + 2;
            error = error + (-radius << 1) + dx;
        }
        if(error <= 0)
        {
            y = y + 1;
            error = error + dy;
            dy = dy + 2;
        }
    }
}
void pixelEllipse(float P[][2])
{
//    usleep(8*1000);
    putpixel(P[0][0],P[0][1],2);
//    usleep(8*1000);
    putpixel(P[1][0],P[1][1],3);
//    usleep(8*1000);
    putpixel(P[2][0],P[2][1],4);
//    usleep(8*1000);
    putpixel(P[3][0],P[3][1],5);
}
void drawEllipse(int xc, int yc, int rx, int ry, int alpha, int color)
{
    float t = 3.14 / 180;
    alpha = 360 - alpha;
    setcolor(color);
    float theta;

    // Filling each pixel corresponding
    // to every angle from 0 to 360
    for (float i = 0; i < 360; i += 0.1) {
        theta = i;
        int x = rx * cos(t * theta) * cos(t * alpha)
                + ry * sin(t * theta) * sin(t * alpha);

        int y = ry * sin(t * theta) * cos(t * alpha)
                - rx * cos(t * theta) * sin(t * alpha);

        putpixel(xc + x, -y + yc, color);
    }
}