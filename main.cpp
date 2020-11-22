#include <vector>
#include "util.h"
#include "shape/shape.h"
#include "transformation/transformation.h"
#include "karya/karya.h"
typedef long double ld;
template <size_t rows, size_t cols>
void printMatrix(float (&P)[rows][cols])
{
    for (int x = 0; x < rows; x++)
        for (int y = 0; y < cols; y++)
            cout << P[x][y] << " \n"[y == cols-1];
}
int main()
{
    makeWindow(1024,720,(char *)"Linux BGI");
    bungaDelapanKelopak(100,100,30,8);
    bungaDelapanKelopak(100+120,100,30,8);
    getch();
    closegraph();
    return 0;
}