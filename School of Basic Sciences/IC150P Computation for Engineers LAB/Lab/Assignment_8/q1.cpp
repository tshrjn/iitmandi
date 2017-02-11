#include<iostream>
#include<stdio.h>
class Matrix
{
	int mat[5][5];
	int row, col;
   public:
	void input();
	void display();
	int multiply(Matrix, Matrix);

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


int Matrix::multiply(Matrix m1, Matrix m2)
{
	int i,j,k;
	row = m1.row;
	col = m2.col;
	if(m1.col==m2.row)
	{
		for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			mat[i][j]=0;
			for(k=0;k<m1.col;k++)
			mat[i][j]+=m1.mat[i][k] *m2.mat[k][j];
		}
		return(1);
	}
	else
	return(0);
}


int main()
{

    Matrix m1, m2,m3; //original matrices
    int x;

            printf(" Multiplying two matrices\n");
            m1.input();
			m2.input();
			x=m3.multiply(m1,m2);
			if(x==0)
			printf("Matrices can not be multiplied\n");
			else
			{
				printf("The product of m1 and m2 is:");
				m3.display();
			}

}
