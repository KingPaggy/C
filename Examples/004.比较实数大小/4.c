#include <stdio.h> 
#include <float.h>

int main(void)
{
	printf("The range of real comparisons is between %e and %e. \n",FLT_MIN,FLT_MAX);
	// FLT_MIN,FLT_MAX are defined in <float.h>
	float x,y,c;
	printf("Please input float number x and y:\n");	
	// input two float number
	scanf("%f%f",&x,&y);
	c=x>y?x:y; // conditional operator d=a?b:c;
	// if a is logically true, d=b, otherwise d=c.
	printf("MAX of (%f,%f) is %f",x,y,c);	
}

