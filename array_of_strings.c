#include <stdio.h>

/*

Array of Pointers to Strings:
-----------------------------

An array of pointers to strings is an array of character pointers where each pointer 
points to the first character of the string or the base address of the string. 
Let's see how we can declare and initialize an array of pointers to strings.

example:
--------

char* <array_name>[] = {"val1", "val2", "val3", "val4", "val5",.................};

char* <array_name>[<length>] = {"val1", "val2", "val3", "val4", "val5",.................};

char* <array_name>[] is an array of pointers to strings (address of the string).

iteration:
----------

char* pstr =<array_name>[0]; // assign the address of the first string to a pointer (pstr)

for(int i = 0; i < array_length; i++){
	printf("%s\n", pstr);
	pstr = <array_name>[i + 1]; // Move to the next element in words
}

*/



int main() {
	
	char* words[] = {"Geek", "Geeks", "Geek for"}; // words is an array of pointers to strings (address of the string)
	char* pstr = words[0]; // assign the address of the first string to a pointer (pstr)
	
	printf("String array Elements are (without pointers):\n");

	for(int i = 0; i < 3; i++){
		printf("%s\n", words[i]);
	}

		
	printf("String array Elements are (with pointers):\n");
	
	for(int i = 0; i < 3; i++){
		printf("%s\n", pstr);
		pstr = words[i + 1]; // Move to the next element in words
	}
	
	
	return 0;
}



	