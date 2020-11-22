//
// Created by irvan on 11/16/20.
//
#define SIN(x) sin(x * 3.141592653589 / 180)
#define COS(x) cos(x * 3.141592653589 / 180)
#ifndef INC_2D_TRANSFORMATION_STROKE_H
#define INC_2D_TRANSFORMATION_STROKE_H
#include "util.h"
void ddaLine(int x, int y , int tebal, float x1, float y1, float x2, float y2, string mode, int col);
void drawLine(float x1, float y1, float x2, float y2, int jenis = 1, int tebal = 1, string mode = "in", int col = 1);


#endif //INC_2D_TRANSFORMATION_STROKE_H
