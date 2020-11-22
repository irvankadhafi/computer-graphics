//
// Created by irvan on 11/16/20.
//

#ifndef INC_2D_TRANSFORMATION_SHAPE_H
#define INC_2D_TRANSFORMATION_SHAPE_H
#include "../util.h"
#include "../transformation/transformation.h"
void segiEmpat(float P[][2]);
void drawPersegi(int x, int y, int panjang, int lebar, bool rotate, int colors=1);
void drawJajarGenjang(int x, int y, int panjang, int tinggi, bool rotate, int colors=1);
void drawBelahKetupat(int x, int y, int d1, int d2,bool rotate, int colors=1);
void drawTrapesiumSiku(int x, int y, int a, int b, int height, bool rotate, int colors=1);
void drawSegitigaSiku(int x, int y, int alas, int tinggi, bool rotate, int colors=1);
void drawSegitigaSamaSisi(int x, int y, int sisi);
void drawLingkaran(int x0, int y0, int radius, int jenis=1);
void drawEllipse(int xc, int yc, int rx, int ry, int alpha=0, int color=1);
#endif //INC_2D_TRANSFORMATION_SHAPE_H
