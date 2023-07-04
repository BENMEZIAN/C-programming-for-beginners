#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
	
	char str[] = "Hello world"; // array containing "Hello world"
	char* pstr = "Hello world"; // pstr is pointer to address containing a string "Hello world"
	
	printf("Array version: ");
	for(int i = 0;i<strlen(str);i++){
		printf("%c",str[i]);
	} // Hello world
	
	printf("\nPointer version: ");
	printf("%s",pstr); // Hello world
	
/*	
	Assignement between pointer (pstr) and base address of array (str) ==> correct
	Assignement between two base addresses of arrays (str) ==> wrong
	
	char str[] = "Hello world";
	char str1[] = "Hello world";
	str = str1; wrong
*/	

	pstr = str; // correct
	printf("\nAfter assignement : %s",pstr); // Hello world
	
	return 0;
}


