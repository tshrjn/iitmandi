#include<stdio.h>

float Area (float r)
{
    return (3.14*r*r);
}
float Perimeter (float r)
{
    return (2*3.14*r);
}

int Check(float r)
{
    if (r<0)
    {
        printf("Inputted radius is -ve. Aborting Program");
        exit(1);
    }

}

int SumArea(float Ar,float *Sum)
{
    (*Sum)+=Ar;
}

main ()
{
    float r,Sum=0;
    int i;
    for (i=1;i<=4;++i)
    {
        printf("\nInput radius %d:",i);
        scanf("%f",&r);

        Check(r);

        SumArea(Area(r),&Sum);

        printf("\n The Area of the circle = %f\n", Area(r));

        //printf("\n The Perimeter of the circle = %f\n", Perimeter(r));
    }
    printf("\nSum of Area:%f",Sum);
}
