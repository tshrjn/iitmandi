#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int n,m,i;


int Dis(int a[],int b[])
{
    float dis=-1;
    if (n==m)
    {
        for(i=0,dis=0;i<n;++i)
            dis+=(a[i]-b[i])*(a[i]-b[i]);
        dis=sqrt(dis);
        printf("\nThe euclidean dis between 2 vectors is: %f", dis);
    }
    else
        printf("\nVectors are not dimesionally equal.");

}



main()
{
    int *arr1,*arr2;
    printf("Input dimensions of the vector1: ");
    scanf("%d",&n);
    arr1=malloc(n*sizeof(int));

    printf("Input dimensions of the vector2: ");
    scanf("%d",&m);
    arr2=malloc(m*sizeof(int));

    printf("Input the elements of the vector1:\n");
    for(i=0;i<n;++i)
        scanf("%d",&arr1[i]);

    printf("Input the elements of the vector2:\n");
    for(i=0;i<m;++i)
        scanf("%d",&arr2[i]);

    Dis(arr1,arr2);

}
