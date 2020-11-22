#include <vector>
#include "util.h"
#include "shape/shape.h"
#include "transformation/transformation.h"
typedef long double ld;
template <size_t rows, size_t cols>
void printMatrix(float (&P)[rows][cols])
{
    for (int x = 0; x < rows; x++)
        for (int y = 0; y < cols; y++)
            cout << P[x][y] << " \n"[y == cols-1];
}
void bungaEmpatKelopak(){
    int xp,yp,rx,ry;
    xp = 100;
    yp = 100;
    rx = 50;
    ry = 10;
    drawEllipse(xp-rx,yp,rx,ry);
    drawEllipse(xp+rx,yp,rx,ry);
    drawEllipse(yp,xp-rx,ry,rx);
    drawEllipse(yp,xp+rx,ry,rx);
}
void bungaDelapanKelopak(){
    float garis[3][2]={
            {100, 100},
            {150,100},
            {50, 100}
    };
    float tempLines[3][2];
    memcpy(tempLines, garis, sizeof(tempLines));
    rotasiGaris(garis,3,45, false);
    rotasiGaris(tempLines,3,45, true);
    bungaEmpatKelopak();
    drawEllipse(garis[1][0],garis[1][1],50,10,45);
    drawEllipse(garis[2][0],garis[2][1],50,10,45);
    drawEllipse(tempLines[1][0],tempLines[1][1],50,10,-45);
    drawEllipse(tempLines[2][0],tempLines[2][1],50,10,-45);
}
int main()
{
    makeWindow(500,500,(char *)"Linux BGI");
//    mainMenu();
    bungaDelapanKelopak();
    getch();
    closegraph();
    return 0;
}