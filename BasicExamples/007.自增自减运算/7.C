#include <stdio.h>

int main(void)
{
	int i=10;

	printf("\\\\In the beginning, i = %d\n",i);
	printf("function(i++);  \\\\ The value passed to function is  %d, after the passing, i = %d .\n",i++,i);
	printf("function(++i);  \\\\ The value passed to function is  %d, after the passing, i = %d .\n",++i,i);
	printf("function(--i);  \\\\ The value passed to function is  %d, after the passing, i = %d .\n",--i,i);
	printf("function(i++);  \\\\ The value passed to function is  %d, after the passing, i = %d .\n",i++,i);
	printf("function(i--);  \\\\ The value passed to function is  %d, after the passing, i = %d .\n",i--,i);
	printf("function(-i++); \\\\ The value passed to function is %d, after the passing, i = %d .\n",-i++,i);
	printf("function(-i--); \\\\ The value passed to function is %d, after the passing, i = %d .\n",-i--,i);
	
	return 0;
}

