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

void dis_tuple(int arr[],int numArgs)
{
    printf("( %d, %d, %f, %f )",numArgs,Sum(arr,numArgs),Mean(arr,numArgs),Var(arr,numArgs));
}

void dis_newline(int arr[],int numArgs)
{
    printf("numArgs = %d\n sum = %d\n mean = %f\n var = %f \n",numArgs,Sum(arr,numArgs),Mean(arr,numArgs),Var(arr,numArgs));
}

void dis_default(int arr[],int numArgs)
{
    printf("numArgs = %d; sum = %d; mean = %f; var = %f \n",numArgs,Sum(arr,numArgs),Mean(arr,numArgs),Var(arr,numArgs));
}

main (int argc, char* argv[])
{
    int numArgs=argc-1,arr[numArgs],x=-1;char c;

    while(--argc > 0 && (*++argv)[0]=='-')
       while(c = *++argv[0])
        switch(c)
        {
            case 'n'
                    :x=1;numArgs--;
                    int ar[numArgs];
                    For(i,0,argc)
                        ar[i]=atoi(argv[i+2]);
                    dis_newline(ar,numArgs);
                    break;
            case 't'
                    :x=1;numArgs--;
                    int a[numArgs];
                    For(i,0,argc)
                        a[i]=atoi(argv[i+2]);
                   dis_tuple(a,numArgs);
                    break;
            default
                    :x = isdigit(c);
                    For(i,0,argc)
                        arr[i]=atoi(argv[i+1]);
                    if(!x)
                        printf("Error: Input appropriate arguments '-n' or '-t'");
        }
        if(x== -1)
            dis_default(arr,numArgs);
}
