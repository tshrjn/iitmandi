#include<stdio.h>
#include<stdlib.h>

typedef struct _node{
    int info;
    struct _node *next;
}Node;

Node *start,*newptr,*temp,*ptr;

Node* MakeNode(int n)
{
    ptr=malloc(sizeof(Node));
    ptr->info=n;
    ptr->next=NULL;
}

void AddNode(Node* np)
{
    if(start==NULL)
        start=np;
    else
    {
        temp=start;
        start=np;
        np->next=temp;
    }

}

void Display(Node*np)
{
    while(np!=NULL)
    {
        printf("%d ->",np->info);
        np=np->next;
    }
    printf("\n");
}

int main(int argc,char* argv[])
{
    start =NULL;
    int inf,i=1;

    while(i<argc)
    {
        inf=atoi(argv[i]);
        newptr=MakeNode(inf);
        AddNode(newptr);
        ++i;
    }
    printf("\nAddress of head is :%x \n",newptr);
    printf("The number of elements = %d\n", argc-1);

    //free(ptr);
}
