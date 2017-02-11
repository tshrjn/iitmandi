#include<iostream>
#include<stdio.h>
class Matrix
{
	int mat[5][5];
	int row, col;
   public:
	void input();
	void display();
	void find(Matrix,int);

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

void Matrix::find(Matrix m1,int z)
{
    int i,j;
    row=m1.row;col=m1.col;
    for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
            if(m1.mat[i][j]==z)
                mat[i][j]=1;
            else
                mat[i][j]=0;
	}
}


int main()
{

    Matrix m1,find; //original matrices
    int z;

            printf(" Finding an element in a matrix\n");
            m1.input();
            printf("\nInput element to be searched:\n");
            scanf("%d",&z);
            find.find(m1,z);
			find.display();

}
