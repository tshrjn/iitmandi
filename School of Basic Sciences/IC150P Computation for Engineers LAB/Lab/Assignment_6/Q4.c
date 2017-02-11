#include<stdio.h>
#include<stdlib.h>

int i,len[2],flag[100],index=-1;
int strlen(char s[])
{
    int l=0;
    while ( s[l] != '\0' )
        l++;
    return l;
}
int strcmp(char c1[],char c2[])            //1st one is larger
{
    int j=0,flag1,flag2;

    len[0]=strlen(c1);
    len[1]=strlen(c2);

    for(j=0;j<(len[1]-len[0]);++j)
    {
        for(i=0;i<len[0];i++)
        {
            if(c1[i+j]==c2[i])
                flag[i]=1;
            else
                flag[i]=0;
        }
        for(i=0;i<len[0];i++)
        {
            if(!flag[i])
            {
                flag[0]=0;
                break;
            }
            else
                index=j;
        }
        if(index==j)
            break;
    }


    return(flag[0]);
}

main()
{
    char str[2][100];

    for(i=0;i<2;++i)
    {
        printf("Input string %d : \n",i+1);
        gets(str[i]);
        len[i]=strlen(str[i]);
    }

    if(len[0]>len[1])
        if(strcmp(str[0],str[1]))
            printf("It is a substring.And it starts from %d & ends at",index+1,index+len[1]+1);
        else
            printf("It is not a substring");
    else
        if(strcmp(str[1],str[0]))
            printf("It is a substring.And it starts from %d & ends at",index+1,index+len[1]+1);
        else
            printf("It is not a substring");

}
