/* Input two numbers, output the product */
#include <stdio.h>
// Don't consider the situation of overflow
// 65536 * 65536 = 0
// (2^16) * (2^16) = 0
int main()
{
	int x,y,m;				
	printf("Please input x and y\n");	
	scanf("%d%d",&x,&y);			
	// scanf() can read '3[Enter]3','3[Space]3','3+3'. 
	m=x*y;					
	printf("%d * %d = %d\n",x,y,m);		
}

