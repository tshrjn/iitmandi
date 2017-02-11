#include<iostream>
#include<stdio.h>
class Matrix
{
	int mat[5][5];
	int row, col;
   public:
	void input();
	void display();
	void submatrix(Matrix,int,int,int,int);

};

void Matrix::input()
{
	int i,j;
	printf("Enter number of rows and coulmns :");
	scanf("%d %d",&row,&col);
	printf("Enter the elements of the matrix :\n");
	for(i=0; i<row; i++)
	    for(j=0; j<col; j++)
		scanf("%d",&mat[i][j]);
}

void Matrix::display()
{
	int i,j;
	printf("\n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		printf("%d \t",mat[i][j]);
		printf("\n");
	}
}

void Matrix::submatrix(Matrix m1,int rb,int re,int cb,int ce)
{
    int i,j;
    row =re-rb+1;col=ce-cb+1;
    for(i=rb; i<=re; i++)
	{
		for(j=cb; j<=ce; j++)
            mat[i-rb][j-cb]=m1.mat[i][j];
	}
}


int main()
{

    Matrix m1,sub; //original matrices
    int x,rb,re,cb,ce;

            printf(" Finding submatrix of a matrix\n");
            m1.input();
            printf("\nInput r_b, r_e, c_b, c_e:\n");
            scanf("%d %d %d %d",&rb,&re,&cb,&ce);
            sub.submatrix(m1,rb,re,cb,ce);
			sub.display();

}
