#include<stdio.h>

int Increment(int);

main()
{
    int n;
    printf("Input an Integer:");
    scanf("%d",&n);
    fflush(stdin);

    printf("\nThe Integer before calling Increment():%d",n);
    n=Increment(n);
    printf("\nThe Integer after calling Increment():%d\n",n);
}

int Increment(int n)
{
    return(++n);
}
