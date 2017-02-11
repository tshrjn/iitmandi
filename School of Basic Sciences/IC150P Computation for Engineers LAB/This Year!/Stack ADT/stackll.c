/*-------------------------------------------------------------------------
 *  stackll.c - Linked list implementation of Stack ADT 
 *  Version:	$Name$
 *  Module:	
 *
 *  Compilation: gcc -c -o stack.o stackll.c
 *
 *  Author:	Timothy Gonsalves (tag@Orca-2.local)
 *
 *  Created:        Fri 09-May-2014 16:46:25
 *  Last modified:  Sun 11-May-2014 11:59:49 by tag
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

typedef struct _node Node;
struct _node
{
    int           data;
    struct _node *next;
};

struct _stack
{
    int   size;
    Node *top;
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
  sp->top  = NULL;

  return sp;
}

/*-------------------------------------------------------------------------
 *  Push -- add x to a stack
 *    Args:	Ptr to the stack, sp; the int to push, x
 *    Returns:	size of the stack (>=0), or -1 on error
 -------------------------------------------------------------------------*/
int Push(Stack sp, int x)
{
  Node *np;

  if ((np = (Node *) malloc(sizeof(struct _node))) == NULL) 
    return -1;

  np->data    = x;
  np->next    = sp->top;
  sp->top  = np;
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
  Node *np;

  if (sp->top == NULL) return -1; /* empty stack */

  np         = sp->top;
  sp->top    = np->next;
  sp->size--;
  *xp        = np->data;
  free(np);
  return(sp->size);
}
 
/*-------------------------------------------------------------------------
 *  Print -- prints elements from top (left) to bottom (right)
 *    Args:	The stack, sp
 *    Returns:	Nothing
 -------------------------------------------------------------------------*/
void Print(Stack sp)
{
  Node *np;

  printf("Stack size = %d; Top: ", sp->size);
  np = sp->top;
  while (np)
    {
      printf("%d ", np->data);
      np = np->next;
    }
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
