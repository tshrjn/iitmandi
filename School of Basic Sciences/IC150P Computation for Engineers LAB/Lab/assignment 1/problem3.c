#include<stdio.h>

main()
{
    int a=1,b=2,c=3,*p=NULL;

    printf("The initial values:\na=%d b=%d c=%d\n",a,b,c);

    p=&a;*p=*p + 1;
    p=&b;*p=*p + 1;
    p=&c;*p=*p + 1;

    p=&a;
    printf("\nThe new value of a is: %d\nThe address of a is: %u\n",a,p);
    p=&b;
    printf("\nThe new value of b is: %d\nThe address of b is: %u\n",b,p);
    p=&c;
    printf("\nThe new value of c is: %d\nThe address of c is: %u\n",c,p);
}
