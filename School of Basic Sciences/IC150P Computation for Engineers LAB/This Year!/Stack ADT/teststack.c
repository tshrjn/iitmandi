// teststack.c -- program to test push and pop on stack of integers
// By T.A. Gonsalves, 9 May 2014
//
// Compilation: gcc -o teststack teststack.c stack.o

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

int main(int argc, char *argv[])
{
  int i, rv, x;
  Stack s;

  s = NewStack();

  for (i = 1; i < argc; i++)
    {
      if ((x = atoi(argv[i])) < 0)
	{			/* -ve ==> Pop */
	  if ((rv = Pop(s, &x)) < 0)
	    {
	      printf("Pop:  stack empty\n");
	      continue;
	    }
	  else
	    {
	      printf("Pop:  %d -- ", x);
	      Print(s);
	    }
	}
      else			/* +ve ==> Push */
	{
	  if ((rv = Push(s, x)) < 0)
	    {
	      printf("Push failed\n");
	      exit(2);
	    }
	  else
	    {
	      printf("Push: %d -- ", x);
	      Print(s);
	    }
	}
    } /* End for (...i < argc...) */
} /* End main      End main */
