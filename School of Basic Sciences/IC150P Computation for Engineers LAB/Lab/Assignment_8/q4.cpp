#include<iostream>
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main()
{

  int m=30,n=30, k =0, i=0,j=0,func=0,xo=m/2, yo=n/2, p=1, no=0,l;               //declare , initialize variables
  char mat[m][n];                                                        // declare 2-d matrix
  float x,y;

  for (i=0;i<m;i++)
    {
      for (j=0;j<n;j++) mat[i][j]=' ';                                    //make all elements of 2-d matrix <space>
    }

  //printf("function\tcode\nsin x\t1\n x\t2\nx^2\t3\ntan x \t 4\n");        //print function code table
  printf("Enter number of functions you want to plot:");
  scanf("%i",&no);
  for (l=0;l<no;l++)
    {
      printf("\n Menu\n");                                         // promt input function code
      printf("Enter one of the following codes to plot respective functions\n");
      printf("1 for function sin(x)\n");
      printf("2 for function y=x\n");
      printf("3 for function x^2\n");
      printf("4 for function tan(x)\n");
      scanf("%d", &func);
    switch(func)
    {
      case 1:                                // sin x
	  /* for (i=0;i<m;i++){
	     x=(6.28/30)*i - xo;
	     y=round(15*(sinf(x)));
	     j=y+yo;
	     mat[i][j]= '*';*/
	  for(i=0;i<m;i++){
	    x=(6.28/ 30)*i-xo;			//scale(2*pi/scaler) x and change origin
	    y=round(15*(sinf(x)));                 // round sin to nearest values
	    j=y+yo;                                  // make y position of mat = value of function wrt origin
	    mat[j][i]='*';                      // print a * there
        }
        break;

      case 2:                               // x
	  for (i=0;i<m;i++){
	    x=i - xo;                               //shift orgin
	    y=x;                                 //make y of mat = value of func
	    j=y+yo;
	    mat[i][j]= '*';                          //print 8 over there
        }
        break;

      case 3:                                 // x^2
	  for (i=0;i<m;i++){
	    x=i - xo;
	    y=x*x;
	    j=-y+yo;
	    if(j>=0  && j<n)
	      mat[i][j]= '*';
	  }
	  break;

      case 4:                                 //y=tan x
	  for (i=0;i<m;i++){
	    x=(6.28/40)*i - xo+2;
	    y=round(5*(tanf(x)));
	    j=y+yo;
	    mat[i][j]= '*';
	  }
	  break;

	  default:
        printf("\nWrong option inputted.Aborting Program !\n");
        exit(1);
	  }
      for(i=0;i<m;i++){                    // plot function

	for(j=n;j>=0;j--) printf("%c ",mat[i][j]);        //print the matrix
	printf("\n");
      }

    }
  printf("\n\n");
}
