#include<stdio.h>
#define PI 3.1416  // define function.

double Area(double r)
{
    return PI*2*r;
}

int main()
{
    double r,area;
    scanf("%lf",&r);
    area=Area(r);
    printf("%lf",area);
}
