/* diaplay the byte of different data type*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("The bytes of the variables are:\n");

    printf("char:%ld byte\n",sizeof(char));
	// Defined in header <limits.h>.
    printf("CHAR_MIN  = %+d \n",CHAR_MIN);
    printf("CHAR_MAX  = %+d \n",CHAR_MAX);
    printf("SCHAR_MIN = %+d \n",SCHAR_MIN);
    printf("SCHAR_MAX = %+d \n",SCHAR_MAX);
    printf("UCHAR_MAX = %u \n",UCHAR_MAX);

	putchar('\n');

    printf("short:%ld bytes\n",sizeof(short));
	// Defined in header <limits.h>.
    printf("SHRT_MIN  = %+d \n",SHRT_MIN);
    printf("SHRT_MAX  = %+d \n",SHRT_MAX);
    printf("USHRT_MAX = %u \n",USHRT_MAX);

	putchar('\n');

    printf("int:%ld bytes\n",sizeof(int));
	// Defined in header <limits.h>.
    printf("INT_MIN  = %+d \n",INT_MIN);
    printf("INT_MAX  = %+d \n",INT_MAX);
    printf("UINT_MAX = %u \n",UINT_MAX); 

	putchar('\n');

    printf("float:%ld bytes\n",sizeof(float));
	// Defined in header <float.h>.
    printf("FLT_MIN  = %+e \n",FLT_MIN);
    printf("FLT_MAX  = %+e \n",FLT_MAX);

	putchar('\n');

    printf("long:%ld bytes\n",sizeof(long));
	// Defined in header <limits.h>.
    printf("LONG_MIN  = %+ld \n",LONG_MIN);
    printf("LONG_MAX  = %+ld \n",LONG_MAX);
    printf("ULONG_MAX = %lu \n",ULONG_MAX);

	putchar('\n');

    printf("double:%ld bytes\n",sizeof(double));
	// Defined in header <float.h>.
    printf("DBL_MIN  = %+e \n",DBL_MIN);
    printf("DBL_MAX  = %+e \n",DBL_MAX);

	putchar('\n');

    printf("long double:%ld bytes\n",sizeof(long double));
	// Defined in header <float.h>.
    printf("LDBL_MIN  = %+Le \n",LDBL_MIN);
    printf("LDBL_MAX  = %+Le \n",LDBL_MAX);
	
	return 0;
}

