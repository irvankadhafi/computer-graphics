//
// Created by irvan on 11/22/20.
//
#include "karya.h"
void bungaEmpatKelopak(int xp,int yp, int px, int py)
{
    drawEllipse(xp-px,yp,px,py);
    drawEllipse(xp+px,yp,px,py);
    drawEllipse(xp,yp-px,py,px);
    drawEllipse(xp,yp+px,py,px);
}
void bungaDelapanKelopak(int xp, int yp, int px, int py)
{
    float garis[3][2]={
            {(float)xp,         float(yp)},
            {(float)(xp+px),    float(yp)},
            {(float)(xp-px),    float(yp)}
    };
    float tempLines[3][2];
    memcpy(tempLines, garis, sizeof(tempLines));
    rotasiGaris(garis,3,45, false);
    rotasiGaris(tempLines,3,45, true);
    bungaEmpatKelopak(xp,yp,px,py);
    drawEllipse(garis[1][0],garis[1][1],px,py,45);
    drawEllipse(garis[2][0],garis[2][1],px,py,45);
    drawEllipse(tempLines[1][0],tempLines[1][1],px,py,-45);
    drawEllipse(tempLines[2][0],tempLines[2][1],px,py,-45);
}