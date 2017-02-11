#include<stdio.h>

int SelectCand(char qual,float cgpa)
{
    if ((qual=='b' && cgpa >=7)||(qual=='m'&& cgpa>=8))
        return 1;
    if ((qual=='B' && cgpa >=7)||(qual=='M'&& cgpa>=8))
        return 1;
    else
        return 0;
}

main()
{
    char qual;
    do
    {
        float cgpa;
        printf("\nInput Qualification(b-Bachelors/m-Masters):\n");
        scanf("%c",&qual);
        do
        {
            printf("\nInput CGPA:\n");
            scanf("%f",&cgpa);
        }while(cgpa<0||cgpa>10);

        if (SelectCand(qual,cgpa))
            printf("\nThe candidate is SELECTED.");
        else
            printf("\nThe candidate is NOT selected.");

        printf("\nPress 'y' to check another candidate:\n");
        scanf("%c",&qual);

    }while(qual=='y'||qual=='Y');
}
