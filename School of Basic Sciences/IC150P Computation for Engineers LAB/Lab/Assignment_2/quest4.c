#include<stdio.h>


int* Address(int *n)
{
    return(n);
}
main()
{
    int n;
    printf("\nAddress of the Int n using conventional '&' is: %u",&n);
    printf("\nAddress of the Int n using function Adress() is:%u",Address(&n));

}
