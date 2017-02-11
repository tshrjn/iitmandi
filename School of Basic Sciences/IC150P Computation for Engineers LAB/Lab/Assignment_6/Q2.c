#include<stdlib.h>
#include <stdio.h>
//#include<ctype.h>

int isdigit(char a)
{
    if(a>='0'&&a<='9')
        return 1;
    else
        return 0;
}
int length = 0,i;

void IncrementIntStr(char a[])
{
    for(i=0 ; i < length ;i++)
        {
            if ( isdigit((a[i])) )
                if(a[i]=='9')
                    a[i]='0';
                else
                    a[i]=(a[i]+1);
            else
                break;

        }
}
void DecrementIntStr(char a[])
{
    for(i=0 ; i < length ;i++)
        {
            if ( isdigit(a[i]) )
                if(a[i]=='0')
                    a[i]='9';
                else
                    a[i]=(a[i]-1);
            else
                break;

        }
}main()
{
do{
   char text[100];
   int r;
   printf("Input a number:");
   scanf("%s",text);
   fflush(stdin);


   length=0;
    while ( text[length] != '\0' )
      length++;

    printf("\nChoose an Option");
    printf("\n1.Increment");
    printf("\n2.Decrement");
    printf("\n3.Exit\n");
    scanf("%d",&r);

    switch(r)
    {
        case 1:{
            IncrementIntStr(text);
            if(i==length)
                printf("%s \n",text);
            break;}
        case 2:
            DecrementIntStr(text);
            if(i==length)
                printf("%s\n",text);
            break;
        case 3: exit(1);

        default:printf("\nWrong Option.Try Again\n");
    }
    if(i!=length)
        printf("One must enter a number\n");
}while(1);

}
