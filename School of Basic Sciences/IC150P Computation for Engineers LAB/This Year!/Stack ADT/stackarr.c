/*-------------------------------------------------------------------------
 *  stackarr.c - Array implementation of Stack ADT 
 *  Version:	$Name$
 *
 *  Compilation: gcc -c -o stack.o stackarr.c
 *
 *  Author:	Timothy Gonsalves (tag@Orca-2.local)
 *
 *  Created:        Fri 09-May-2014 16:46:25
 *  Last modified:  Sun 11-May-2014 12:01:29 by tag
 *  $Id$
 *
 *  Bugs:	No limit on stack size.  Only int data allowed.
 *
 *  Change Log:	<Date> <Author>
 *  		<Changes>
 -------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "stack.h"
#define MAX_SIZE 512

typedef struct _node Node;

struct _node
{
    int           data;
    struct _node *next;
};

struct _stack
{
  int size;			/* Index of free space above top */
  int data[MAX_SIZE];
};


/*-------------------------------------------------------------------------
 *  NewStack -- create a new, empty stack
 *    Args:	none
 *    Returns:	on success: an empty Stack; on error: NULL
 -------------------------------------------------------------------------*/
Stack NewStack()
{
  Stack sp;

  if ((sp = (Stack) malloc(sizeof(struct _stack))) == NULL)
    return NULL;

  sp->size = 0;

  return sp;
}

/*-------------------------------------------------------------------------
 *  Push -- add x to a stack
 *    Args:	Ptr to the stack, sp; the int to push, x
 *    Returns:	size of the stack (>=0), or -1 on error
 -------------------------------------------------------------------------*/
int Push(Stack sp, int x)
{
  if (sp->size >= MAX_SIZE)
    return -1;

  sp->data[sp->size] = x;
  sp->size++;
  return sp->size;
}

/*-------------------------------------------------------------------------
 *  Pop -- pop the top element
 *    Args:	Ptr to the stack, sp; ptr to int for the popped value, xp
 *    Returns:	size of the stack (>=0), or -1 on error
 -------------------------------------------------------------------------*/
int Pop(Stack sp, int *xp)
{
  if (sp->size == 0) return -1; /* empty stack */

  sp->size--;
  *xp = sp->data[sp->size];

  return(sp->size);
}
 
/*-------------------------------------------------------------------------
 *  Print -- prints elements from top (left) to bottom (right)
 *    Args:	The stack, sp
 *    Returns:	Nothing
 -------------------------------------------------------------------------*/
void Print(Stack sp)
{
  int i;

  printf("Stack size = %d; Top: ", sp->size);

  for (i = sp->size - 1; i >= 0; i--)
      printf("%d ", sp->data[i]);

  printf("\n");
}

/*-------------------------------------------------------------------------
 * $Log$
 *
 * Local Variables:
 * time-stamp-active: t
 * time-stamp-line-limit: 20
 * time-stamp-start: "Last modified:[ 	]+"
 * time-stamp-format: "%3a %02d-%3b-%:y %02H:%02M:%02S by %u"
 * time-stamp-end: "$"
 * End:
 *                        End of stackll.c
 -------------------------------------------------------------------------*/
