#include<stdio.h>
#include<string.h>
int search(char[],char[]);

int main()
{
char a[100],b[40];
int loc;

printf("\n Enter the main string :");
gets(a);

printf("\n Enter the Sub string :");
gets(b);

loc = search(a,b);

if(loc==-1)
      printf("\nNot found");
else
      printf("\nFound at location %d",loc+1);

return(0);
}

int search(char a[],char b[])
{
int i,j,firstOcc;
i=0,j=0;

while(a[i]!='\0')
  {
     while(a[i]!=b[0] && a[i]!='\0')
         i++;
     if(a[i]=='\0')
        return(-1);     //search can not continue

    firstOcc = i;

     while(a[i]==b[j] && a[i]!='\0' && b[j]!='\0')
         {
         i++;
         j++;
         }

    if(b[j]=='\0')
        return(firstOcc);
    if(a[i]=='\0')
        return(-1);

    i = firstOcc + 1;
    j = 0;
  }
}
