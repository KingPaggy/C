#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COL 4

int main()
{
	int matrixA[ROW][COL],matrixB[COL][ROW];
	int i,j;

	system("clear");
	printf("Enter elements of the matrix A,");
	printf("%d*%d:\n",ROW,COL);
	// input matrix
	for( i=0; i<ROW; i++ )
	{
		for( j=0; j<COL; j++ )
		{
			scanf("%d",&matrixA[i][j]);
		}
	}
	// transpose the matrix A
	for( i=0; i<ROW; i++ )
	{
		for( j=0; j<COL; j++ )
		{
			matrixB[j][i] = matrixA[i][j];
		}
	}
	printf("Matrix B,");
	printf("%d*%d:\n",COL,ROW);
	// output the transposed matrix
	for( i=0; i<COL; i++ )
	{
		for( j=0; j<ROW; j++ )
		{
			printf("%8d",matrixB[i][j]);
		}
		printf("\n");
	}
	// exit
	printf("\n  Press Any Key to Quit...  \n");
	getchar();
	return 0;
}
