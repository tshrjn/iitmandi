#include<stdio.h>

main()
{
    int a[3][3],j,i,val,sum;

    printf("\nInput the elements of 3x3 matrix:");
    for(j=0;j<3;++j)
        for(i=0;i<3;++i)
        {
            printf("\nInput element for a[%d][%d] :",j+1,i+1);
            scanf("%d",&a[j][i]);
        }

    val=a[0][0]+a[0][1]+a[0][2];

    for(j=0;j<3;++j)              //For rows
    {
        for(i=0,sum=0;i<3;++i)
            sum+=a[j][i];

        if(sum!=val)
            break;
    }
    if(sum==val)
    {

        for(j=0;j<3;++j)              //For columns
        {
            for(i=0,sum=0;i<3;++i)
                sum+=a[i][j];

            if(sum!=val)
                break;
        }
    }
    if(sum==val)                     //For Dia
    {

    for(i=0,sum=0;i<3;++i)
        sum+=a[i][i];
    }

    if(sum==val)
        printf("\nIt is a magic Square.");
    else
        printf("\nIt is NOT magic Square.");


}
