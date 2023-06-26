#include <stdio.h>
#include <stdlib.h>


/*

malloc() function:
------------------

malloc() allocates a memory block of given size (in bytes) and returns a pointer to the beginning of the block. 
malloc() doesn’t initialize the allocated memory. If you try to read from the allocated memory without first initializing it, 
then you will invoke undefined behavior, which usually means the values you read will be garbage values.

Syntax: ptr = (<type>*)malloc(n*sizeof(<type>));
-------

calloc() function:
------------------

calloc() allocates the memory and also initializes every byte in the allocated memory to 0. 
If you try to read the value of the allocated memory without initializing it, 
you’ll get 0 as it has already been initialized to 0 by calloc().

Syntax: ptr = (<type>*)calloc(n*sizeof(<type>));
-------

realloc() function:
------------------

Function that allocates dynamically a memory space as well as malloc, it's used of we want to change the
size of the allocted space.

Syntax: ptr = (<type>*)realloc(ptr,n*sizeof(<type>));
-------

free() function:
----------------
Function that disallocates dynamically the allocated memory space.

Syntax: free(ptr);

*/


	// <>
int main() {
	
	int n;
	
	int* ptr = (int*)malloc(n*sizeof(int));
	
	printf("Enter input values:");
	scanf("%d",&n);
	
	for(int i = 0;i<n;i++){
		printf("donner une valeur:");
		scanf("%d",ptr+i);
	}
	
	printf("Input values:\n");
/*	
	for(int i = 0;i<n;i++){
		printf("%d ",*(ptr+i));
	}
*/	
	for(int i = 0;i<n;i++){
		printf("The element %d is found at the address %x\n",*(ptr+i),ptr+i);
	}
	
	free(ptr);
	
	printf("The free function is executed");
	
	return 0;
}


