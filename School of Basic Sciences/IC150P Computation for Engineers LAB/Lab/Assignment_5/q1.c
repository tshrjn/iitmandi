#include<stdio.h>
#include<stdlib.h>

int n,i,sum;

int Sum(int a[])
{
    for(i=0;i<n;++i)
        sum+=a[i];

    return(sum);
}

float Mean(int a[])
{
    return(sum/n);
}

float Var(int a[])
{
    int mean=Mean(a),s=0;
    for(i=0;i<n;++i)
        s+=(a[i] - mean)*(a[i] - mean);
    return(s/n);
}

main()
{
    int *arr;
    printf("Input no of elements in the array: ");
    scanf("%d",&n);
    arr=malloc(n*sizeof(int));

    printf("Input the elements of the array:\n");
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);

    printf("\nSum of the elements of the array = %d\n", Sum(arr));
    printf("\nMean of the elements of the array = %f\n", Mean(arr));
    printf("\nVariance of the elements of the array = %f\n", Var(arr));
}
