#include<stdio.h>
#include<stdlib.h>
int Increment(int*);

main()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));

    printf("Input an Integer:");
    scanf("%d",ptr);
    fflush(stdin);

    printf("\nThe Integer before calling Increment():%d",*ptr);
    *ptr=Increment(ptr);
    printf("\nThe Integer after calling Increment():%d\n",*ptr);

    free(ptr);
}

int Increment(int *n)
{
    return(++(*n));
}
