/*-------------------------------------------------------------------------
 *  stack.h - typedefs and interface functions for stack ADT
 *
 *  Author:	Timothy Gonsalves (tag@Orca-2.local)
 *
 *  Created:        Fri 09-May-2014 16:43:10
 *  Last modified:  Sun 11-May-2014 12:02:32 by tag
 *  $Id$
 *
 *  Bugs:	Does not allow stack size to be limited
 *
 *  Change Log:	<Date> <Author>
 *  		<Changes>
 -------------------------------------------------------------------------*/

#ifndef _STACK_H_INCLUDED_
#define _STACK_H_INCLUDED_

typedef struct _stack * Stack;

/*-------------------------------------------------------------------------
 *  NewStack -- create a new, empty stack
 *    Args:	none
 *    Returns:	on success: an empty Stack; on error: NULL
 -------------------------------------------------------------------------*/
Stack NewStack();

/*-------------------------------------------------------------------------
 *  Push -- add x to a stack
 *    Args:	Ptr to the stack, sp; the int to push, x
 *    Returns:	size of the stack (>=0), or -1 on error
 -------------------------------------------------------------------------*/
int Push(Stack sp, int x);

/*-------------------------------------------------------------------------
 *  Pop -- pop the top element
 *    Args:	Ptr to the stack, sp; ptr to int for the popped value, xp
 *    Returns:	size of the stack (>=0), or -1 on error
 -------------------------------------------------------------------------*/
int Pop(Stack sp, int *xp);

/*-------------------------------------------------------------------------
 *  Print -- prints elements of stack sp from top (left) to bottom (right)
 -------------------------------------------------------------------------*/
void Print(Stack sp);

#endif _STACK_H_INCLUDED_

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
 *                        End of stack.h
 -------------------------------------------------------------------------*/
