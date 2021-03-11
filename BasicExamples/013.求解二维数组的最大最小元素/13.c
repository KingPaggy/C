#include <stdio.h>
#include <stdlib.h>

#define MAXN 20
int a[MAXN][MAXN];

int main()
{
	int min,max;	
	int row,col,n;
	system("clear");
	printf("Please input the order of the matrix:\n");
	scanf("%d",&n);
	printf("Please input the elements of the matrix,\n from a[0][0] to a[%d][%d]:\n",n-1,n-1);
	// input the matrix
	for(row=0;row<n;row++)
		for(col=0;col<n;col++){
			printf("a[%d][%d]=",row,col);
			scanf("%d",&a[row][col]);
			putchar('\n');
		}
	// find the minimum
	for(min=a[0][0],row=0;row<n;row++){
		for(col=1;col<n;col++)
			if(min>a[row][col])
				min=a[row][col];
	}
	printf("The minimum number is %d\n",min);
	// find the maximum
	for(max=a[0][0],row=0;row<n;row++){
		for(col=1;col<n;col++)
			if(max<a[row][col])
				max=a[row][col];
	}
	printf("The maximum numbers is %d\n",max);
	// exit
	printf("\nPress any key to quit...\n");
	getchar();
	return 0;
}
