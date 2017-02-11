#include<stdio.h>

float Area (float r)
{
    return (3.14*r*r);
}
float Perimeter (float r)
{
    return (2*3.14*r);
}
float Check(float r)
{
    if (r<0) return 0;
    else return 1;
}
main ()
{
    float r;
    printf("Input radius:");
    scanf("%f",&r);

    if (Check(r)==0)
    {
        printf("Inputted radius is -ve. Aborting Program");
        exit(1);
    }

    printf("\n The Area of the circle = %f\n", Area(r));
    printf("\n The Perimeter of the circle = %f\n", Perimeter(r));
}
