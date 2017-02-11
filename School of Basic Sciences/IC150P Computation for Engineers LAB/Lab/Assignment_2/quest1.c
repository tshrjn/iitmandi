#include<stdio.h>

float Area ( float r)
{
    return (3.14*r*r);
}
float Perimeter ( float r)
{
    return (2*3.14*r);
}

main ()
{
    float r;
    printf("Input radius:");
    scanf("%f",&r);
    printf("\n The Area of the circle = %f\n", Area(r));
    printf("\n The Perimeter of the circle = %f\n", Perimeter(r));
}
