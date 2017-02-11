#include<stdio.h>
int strlen(char *s)
{
    int l=0;
    while(*(s+l)!='\0')
        l++;
        return l;
}
main()
{
    char *s;
    gets(s);
    int l = strlen(s);
    while(*(s++)!='\0');
    printf("%s Pointer %d string has NULL'\0'",s,l);

}
