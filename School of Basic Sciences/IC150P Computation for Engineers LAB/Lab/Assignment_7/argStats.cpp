#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define For(i,a,n) for(int i=a;i<n;++i)

int Sum(int a[],int n)
{
    int sum=0;
    For(i,0,n)
        sum+=a[i];

    return(sum);
}

float Mean(int a[],int n)
{
    int sum=Sum(a,n);
    return((float)sum/n);
}

float Var(int a[],int n)
{
    float mean=Mean(a,n),s=0;
    For(i,0,n)
        s+=(a[i] - mean)*(a[i] - mean);
    return(s/n);
}


main (int argc, char* argv[])
{
    int numArgs=argc-1,arr[numArgs];
    For(i,1,argc)
        arr[i-1]=atoi(argv[i]);

    printf("numArgs = %d; sum = %d; mean = %f; var = %f \n",numArgs,Sum(arr,numArgs),Mean(arr,numArgs),Var(arr,numArgs));
}
