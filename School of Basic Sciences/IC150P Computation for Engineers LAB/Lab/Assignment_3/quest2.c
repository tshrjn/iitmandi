#include<stdio.h>

int Min3(int a1,int a2,int a3)
{
        if(a1<a2 && a1 <a3)
            return a1;
       else if(a2<a3)
            return a2;
        else
            return a3;
}

main()
{
    int a[4],i,j,iMin,min;

    printf("Input 4 integers:\n");
    for(i=0;i<4;++i)
        scanf("%d",&a[i]);

    for (j=0;j<3;++j)
    {
        for (i=j,min=a[i];i<3;++i)
        {
            if(min>Min3(a[i],a[i+1],32767))
            min=Min3(a[i],a[i+1],32767);
        }

        for(i=j;i<4;++i)
        {
            if(min==a[i])
                iMin=i;
        }
        if(j!=iMin)
        {
            a[j]=a[j]+a[iMin];                          // swap
            a[iMin]=a[j] -a [iMin];
            a[j]=a[j] -a [iMin];
        }
    }

    for(i=0;i<4;++i)
        printf("\n%d",a[i]);
}
