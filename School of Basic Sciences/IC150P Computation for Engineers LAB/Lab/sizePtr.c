#include<stdio.h>

int main()
{
    int *pi;
    char *pc;
    float *pf;
    double *pd;

    struct S{
    int x;
    int y;
    char a[20];} ;
    struct S * p_struct;

    char a[20];
    char *p_string=a;

    printf("%d \n",sizeof(pi));
    printf("%d \n",sizeof(pc));
    printf("%d \n",sizeof(pf));
    printf("%d \n",sizeof(pd));
    printf("%d \n",sizeof(p_struct));
    printf("%d \n",sizeof(p_string));

    system("PAUSE");
}
