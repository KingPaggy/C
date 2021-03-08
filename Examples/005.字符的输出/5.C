#include <stdio.h>

int main(void)
{
	char ch,nch;	/* */
	int count;	/* */
	int k;		/* */

	printf("Input char and press enter.\n");
	printf("Exit with a '#'.\n");
	printf("Repeatly display the char, input a integer number(1-9) before the char you want repeat.\n");
	scanf("%c",&ch);	/* */
	while(ch != '#')	/* */
	{
		if(ch >= '0' && ch <= '9')
		{
			/* */
			count = ch-'0';	/* */
			scanf("%c",&nch);	/* */
			for(k=0;k<count;k++)	/* */
				printf("%c",nch);
		}
		else
			printf("%c",ch);	/* */
		scanf("%c",&ch);		/* */
	}
	printf("#\n");				/* */
}
