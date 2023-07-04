#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

C library function - strcspn():
-------------------------------

Declaration:
------------

size_t strcspn(const char *str1, const char *str2)

Parameters:
-----------

str1 − This is the main C string to be scanned.

str2 − This is the string containing a list of characters to match in str1.

Return Value:
This function returns the number of characters in the initial segment of string str1 which are not in the string str2.

int main () {
   int len;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "013";

   len = strcspn(str1, str2);
   
   // lindice est : 9 
   printf("First matched character is at %d\n", len + 1);
   
   return 0;
}

Output: First matched character is at 10

9 caractères existent en str1 et non en str2

C library function - strcpy():
-------------------------------

Declaration:
------------

char* strcpy(char* destination, const char* source);

Parameters:
-----------

destination - This is the destination we want to paste the string

source - This is the string we want to copy it 


if your intention is to copy the actual contents of a string, you should use strcpy() or a similar string copying function. 
If you only need to assign the address of a string to a pointer, assignment (=) is sufficient.

example:
--------
char* str1 = "Hello";
char* str2;

str2 = str1;  // Assign the address of str1 to str2

printf("%s\n", str2);  // Output: Hello

--------------------------
char source[] = "Hello";
char destination[10];

strcpy(destination, source);  // Copy the contents of source to destination

printf("%s\n", destination);  // Output: Hello

*/



int main() {
	
	char* words[5]; // words is an array of pointers to strings (address of the string)
	char string[10];
	char* pstr = words[0]; // assign the address of the first string to a pointer (pstr)
	
	for(int i = 0; i < 5; i++){
		printf("Give your string:");
		fgets(string,sizeof(string),stdin);
		string[strcspn(string, "\n")] = '\0'; // Remove the trailing newline character where we find the match of "\n"
        
        // Allocate memory for the string and copy it
        words[i] = malloc(strlen(string) + 1);
        strcpy(words[i], string);
	}
	
	printf("String array Elements are (without pointers):\n");
	
    for (int i = 0; i < 5; i++) {
        printf("words[%d] = %s\n",i,words[i]);
    }
    		
	printf("String array Elements are (with pointers):\n");
	
	for(int i = 0; i < 5; i++){
		printf("words[%d] = %s\n",i,words[i]);
		pstr = words[i + 1]; // Move to the next element in words
	}

	// Free the dynamically allocated memory
    for (int i = 0; i < 5; i++) {
        free(words[i]);
    }
    
    
    
	return 0;
}


