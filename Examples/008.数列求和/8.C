#include <stdio.h>

int main(void)
{
	int i,j,n=0;
	long sum=0,temp=0;

	printf("Please input an integer number:\n");
	// scanf("%d",&n);
	while(n<1)
	{
		scanf("%d",&n);
		printf("The n must be bigger than 0.\n");
		printf("Please try again.\n");
	}

	for(i=1;i<=n;i++)
	{
		temp=0;
		for(j=1;j<=i;j++)
			temp+=j;
		sum+=temp;
	}
	printf("The sum of the sequence(%d) is %ld\n",n,sum);
	return 0;
}
