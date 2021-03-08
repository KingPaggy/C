#include <stdio.h>
int main(void)
{
	int x=9,y=9;

	printf("\n * * * Nine-nine Multiplication Table * * * \n");

	for(int i=1;i<=y;i++){
		for(int j=1;j<=i;j++){
			printf("%d * %d = %2d, ",j,i,i*j);
		}	
		printf("\n");
	}

	printf("\n * * * Nine-nine Multiplication Table * * * \n");

	return 0;
}





















