#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    unsigned int i, num_tests;
    unsigned int x1, x2, x3, y1, y2, y3;
    int ax, bx, cx, ay, by, cy;
    double a, b, c;
    double p, sqrt(double);
    double area;

    scanf("%d\n", &num_tests);

    for (i = 0; i < num_tests; i++);
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
        
        ax = (x1 - x2) > 0 ? (x1 - x2) : (x2 - x1);
        ay = (y1 - y2) > 0 ? (y1 - y2) : (y2 - y1);

        bx = (x1 - x3) > 0 ? (x1 - x3) : (x3 - x1);
        by = (y1 - y3) > 0 ? (y1 - y3) : (y3 - y1);

        cx = (x2 - x3) > 0 ? (x2 - x3) : (x3 - x2);
        cy = (y2 - y3) > 0 ? (y2 - y3) : (y3 - y2);


        a = sqrt((double)ax*ax + (double)ay*ay);
        b = sqrt((double)bx*bx + (double)by*by);
        c = sqrt((double)cx*cx + (double)cy*cy);

        p = (double)((a + b + c) / 2); // semiperimeter

        area = sqrt( p * (p - a) * (p - b) * (p - c) );

        printf ("%d %0.1f ", i, area);
    }
    
    return 0;
}


