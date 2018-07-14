#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    unsigned int x;
    unsigned int y;
};

struct triangle 
{
    struct point pt1;
    struct point pt2;
    struct point pt3;
};

struct triangle ver;

int main(void)
{
    unsigned int i, num_tests;
    double a, b, c;
    double p;;
    double area;

    scanf("%d", &num_tests);

    for (i = 0; i < num_tests; i++);
    {
        scanf("%d%d", &ver.pt1.x, &ver.pt1.y);
        scanf("%d%d", &ver.pt2.x, &ver.pt2.y);
        scanf("%d%d", &ver.pt3.x, &ver.pt3.y);
		
        
        a = sqrt( (double) pow(abs(ver.pt1.x - ver.pt2.x), 2) 
                + (double) pow(abs(ver.pt1.y - ver.pt2.y), 2) );

        b = sqrt( (double) pow(abs(ver.pt1.x - ver.pt3.x), 2) 
                + (double) pow(abs(ver.pt1.y - ver.pt3.y), 2) );

        c = sqrt( (double) pow(abs(ver.pt2.x - ver.pt3.x), 2) 
                + (double) pow(abs(ver.pt2.y - ver.pt3.y), 2) );

        p = (double)((a + b + c) / 2); // semiperimeter

        area = sqrt( p * (p - a) * (p - b) * (p - c) );

        printf ("%7.f ", area);
    }
    
    return 0;
}


