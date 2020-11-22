//
// Created by irvan on 11/16/20.
//

#include "stroke.h"
void ddaLine(int x, int y , int tebal, float x1, float y1, float x2, float y2, string mode, int col)
{
    if (tebal>1){
        for (float j = 0; j < tebal; j+=0.1) {
            if(x1 == x2){
                if(mode=="in")
                    putpixel(x+j,y,col); //INSIDE
                else
                    putpixel(x-j,y,col); //OUTSIDE
            }
            else if(y1 == y2){
                if(mode=="in")
                    putpixel(x,y+j,col); //INSIDE
                else
                    putpixel(x,y-j,col); //OUTSIDE
            }
            else{
                if(mode=="in")
                    putpixel(x+j,y-j,col); //INSIDE
                else
                    putpixel(x-j,y+j,col); //OUTSIDE
            }

        }
    }
    else{
        putpixel(x,y,col);
    }
}
void drawLine(float x1, float y1, float x2, float y2, int jenis, int tebal, string mode, int col)
{

    float dx,dy,len,x,y;
    int i;

    dx = abs(x2-x1);
    dy = abs(y2-y1);

    if(dx>=dy)
        len=dx;
    else
        len=dy;

    dx = (x2-x1)/len;
    dy = (y2-y1)/len;

    x = x1 + 0.1;
    y = y1 + 0.1;
    for(i=0;i<=len;i++)
    {
        switch (jenis) {
            case 1: //Solid
                ddaLine(x, y, tebal, x1, y1, x2, y2, mode, col);
                break;
            case 2: // Dash
                if(i%9<6){
                    ddaLine(x, y, tebal, x1, y1, x2, y2, mode, col);
                }
                break;
            case 3: //dotted
                if(i%9<0.5){
                    ddaLine(x, y, tebal, x1, y1, x2, y2, mode, col);
                }
                break;
            case 4: //Dashed Dotted
                if(i%9<2){

                }
                else if(i%9<6){
                    ddaLine(x, y, tebal, x1, y1, x2, y2, mode, col);
                }
                else if(i%9==7){

                }
                else{
                    ddaLine(x, y, tebal, x1, y1, x2, y2, mode, col);
                }
        }
        x += dx;
        y += dy;
        usleep(4*1000);
    }
}