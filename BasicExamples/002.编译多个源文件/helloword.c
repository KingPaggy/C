#include "print.h"
// Includes source file, identified by filename, into the current source file at the line immediately after the directive.

// #include <filename> (1) // Typical implementations search only standard include directories.

// #include "filename" (2) // Typical implementations first search the directory where the current file resides and, only if the file is not found, search the standard include directories as with (1).

int main(void){
	printHello();
	return 0;
}

// gcc helioword.c print.c
