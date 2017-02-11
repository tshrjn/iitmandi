#include<stdio.h>
main()
{
    int a,b;
    int *p_a,*p_b;

    a=5;
    b=10;

    p_a=&a;
    p_b=&b;

    printf("The value of variable a is:%d\n",a);
    printf("The value of variable b is:%d\n",b);

    printf("Using its pointer, the value of variable a is %d\n",*p_a);
    printf("Using its pointer, the value of variable b is %d\n",*p_b);
}
