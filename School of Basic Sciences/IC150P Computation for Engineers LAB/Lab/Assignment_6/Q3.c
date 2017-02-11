#include<stdio.h>
#include<stdlib.h>

int i,len;
int strlen(char s[])
{
    int l=0;
    while ( s[l] != '\0' )
        l++;
    return l;
}

short int isspace(char ch)
{
    if(ch==' ')
        return 1;
    else
        return 0;
}
void toupper(char *ch)
{
    if((*ch)<='z'&& (*ch)>='a')
        *ch-=32;
}
void Phrase2Title(char ch[])
{
    int j=0;
    toupper(&ch[0]);

    for(i=0;i<len;i++)
    {
        if(isspace(ch[i]))
            j=1;
        else  if(j)
        {
            toupper(&ch[i]);
            j=0;
        }

    }
}



main()
{
    char txt[200];
    printf("Input a phrase:\n");
    gets(txt);
    len=strlen(txt);

    Phrase2Title(txt);
    printf("%s",txt);
}
