#include<stdio.h>
#include<stdlib.h>

int n,m,i;

int Equal(int a[],int b[])
{
    int flag=0;
    if(m==n)
    {
        while(i<n)
        {
                if(a[i]==b[i])
                    ++i;
                else
                {
                    flag=0;
                    break;
                }
        }
        if(i==(n-1))
            flag=1;
    }
    return(flag);
}

main()
{
    int *arr1,*arr2;
    printf("Input no of elements in the array1: ");
    scanf("%d",&n);
    arr1=malloc(n*sizeof(int));

    printf("Input no of elements in the array2: ");
    scanf("%d",&m);
    arr2=malloc(m*sizeof(int));

    printf("Input the elements of the array1:\n");
    for(i=0;i<n;++i)
        scanf("%d",&arr1[i]);

    printf("Input the elements of the array2:\n");
    for(i=0;i<m;++i)
        scanf("%d",&arr2[i]);

    if(Equal(arr1,arr2))
        printf("\nVectors are equal");
    else
         printf("\nVectors are NOT equal");
}
