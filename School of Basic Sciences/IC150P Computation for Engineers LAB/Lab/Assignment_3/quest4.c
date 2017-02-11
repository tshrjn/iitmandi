#include<stdio.h>
#include<math.h>
float deter(float a,float b,float c)
{
    return((b*b) - (4*a*c));
}

main()
{
    float a,b,c,det;
    printf("Input a,b,c for the quad eqn of the form a*(x^2)+b*x +c:\n");
    scanf("%f %f %f",&a,&b,&c);
    det=deter(a,b,c);
    if (det<0)
    {
        printf("The roots are imaginary\n");
        det=-det;
        printf("The roots are:\n %f + i%f\n\t& \n %f - i%f",(-b/(2*a)),((sqrt(det))/(2*a)),(-b/(2*a)),((sqrt(det))/(2*a)));
    }
    else
    {
        printf("The roots are:\n %f  \n & \n %f ",((-b + sqrt(det))/(2*a)),((-b - sqrt(det))/(2*a)));

    }
}
