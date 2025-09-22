#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>

int main() 
{
    int gd = DETECT, gm;
    int xa, xb, ya, yb;
    float step, dx, dy;
    float x, y, xinc, yinc;

    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    printf("Enter The Two Left Endpoints (xa, ya):\n");
    scanf("%d%d", &xa, &ya);

    printf("Enter The Two Right Endpoints (xb, yb):\n");
    scanf("%d%d", &xb, &yb);

    dx = abs(xa - xb);
    dy = abs(ya - yb);

    if (dx >= dy)
        step = dx;
    else
        step = dy;

    x = xa;
    y = ya;

    putpixel(x, y, 10);

    xinc = dx / step;
    yinc = dy / step;

    while (x <= xb) 
    {
        x = x + xinc;
        y = y + yinc;
        putpixel(x, y, 10);
    }

    getch();
    return 0;
}
