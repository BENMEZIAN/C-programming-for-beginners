#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>



/*

1- File Pointer in C:
-----------------

A file pointer is a reference to a particular position in the opened file. It is used in file handling 
to perform all file operations such as read, write, close, etc. 
We use the FILE macro to declare the file pointer variable. The FILE macro is defined inside <stdio.h> header file.

Declaration of file: FILE* pointer_name;
--------------------

2- Open a File in C: Syntax: FILE* fopen(const char *file_name, const char *access_mode);
--------------------

Parameters:
-----------
file_name: name of the file when present in the same directory as the source file. Otherwise, full path.
access_mode: Specifies for what operation the file is being opened.

Return Value:
-------------

If the file is opened successfully, returns a file pointer to it.
If the file is not opened, then returns NULL.

File opening modes in C:
------------------------
File opening modes or access modes specify the allowed operations on the file to be opened, it could be: 
- r : opens a text file in read mode
- w : opens a text file in write mode
- a : opens a text file in append mode

3- Close a File in C: int fclose(FILE *pointer_name);
--------------------- 

4- Writing in File :
--------------------
- int fprintf(FILE* fptr, const char* str, ...); ==> to write a string (sentence) to file (It sends formatted output to a stream.)
- int fputc(int c, FILE* stream); ==> to write one single character into file 
- int fputs(const char *s, FILE *stream) ==> writes a line of characters into file

5- Reading from File:
---------------------
- int fscanf(FILE* ptr, const char* format, ...) ==> to read a string (sentence) from file (It reads a word from the file)
- int fgetc(FILE* stream) ==> to write one single character from the file
- char* fgets(char *s, int n, FILE *stream) ==> function reads a line of characters from file

6- Error handling (Different methods of Error handling in C):
-------------------------------------------------------------

- Global Variable errno:
------------------------
When a function is called in C, a variable named as errno is automatically assigned a code (value) 
which can be used to identify the type of error that has been encountered. Its a global variable indicating the error occurred during any function call 
and defined in the header file errno.h.
Different codes (values) for errno mean different types of errors. Below is a list of few different errno values and its corresponding meaning:
---------------------------------------------
errno value       Error						|
1              Operation not permitted 		|
2             	No such file or directory	| 
3             No such process 				|
4              Interrupted system call 		|
5              I/O error 					|
6              No such device or address 	|
7              Argument list too long 		|
8              Exec format error 			|
9              Bad file number 				|
10             No child processes			|
11             Try again 					|
12             Out of memory				| 
13             Permission denied			| 
---------------------------------------------

- perror(): void perror (const char *str) str: is a string containing a custom message to be printed before the error message itself.
-----------
It displays the string you pass to it, followed by a colon, a space, and then the textual representation of the current errno value.

- strerror(): char *strerror (int errnum) errnum: is the error number (errno).
-------------
returns a pointer to the textual representation of the current errno value.

*/



int main() {
	
    FILE* fp;
    char buf[50];
    
    // Open the file for reading
    fp = fopen("file_demo.txt", "r");
    if (fp == NULL) {
        perror("Error");
        printf("Could not open file for reading, value of errno: %d\n", errno);
        printf("The error message is: %s\n", strerror(errno));
        exit(1);
    }

    // Read data from the file
    if (fgets(buf, sizeof(buf), fp) == NULL) {
        perror("Error");
        printf("Error reading from file, value of errno: %d\n", errno);
        printf("The error message is: %s\n", strerror(errno));
        fclose(fp);
        exit(1);
    }
    
    printf("Read data: %s", buf);
    
    fclose(fp);
    
   
    // Open the file for appending
    fp = fopen("file_demo.txt", "a");
    if (fp == NULL) {
        perror("Error");
        printf("Could not open file for writing, value of errno: %d\n", errno);
        printf("The error message is: %s\n", strerror(errno));
        exit(1);
    }
    
    // Write data to the file
    if (fputs("Hello, world!", fp) == EOF) {
        perror("Error");
        printf("Error writing to file, value of errno: %d\n", errno);
        printf("The error message is: %s\n", strerror(errno));
        fclose(fp);
        exit(1);
    }
    
    fclose(fp);

    return 0;
}






/*

General template to perform operations on the file

// Open the file
FILE *file = fopen(filename, "r");
if (file == NULL) {
    printf("Unable to open the file.\n");
    return 1;
}

// Perform operations on the file
while (!feof(file)) {
    // Read data from the file
    // ...
    int value;
    if (fscanf(file, "%d", &value) == 1) {
        // Process the read value
        // ...
        // Example: Print the read value
        printf("Read: %d\n", value);
    }
}

// Close the file
fclose(file);

*/


/*		
	// read file content using fscanf()
	while (fscanf(fp, "%s", buf) != EOF) {
        printf("%s ", buf);
    }
*/

/*    
	// read file character by character	
	while((ch=fgetc(fp))!=EOF){  
		printf("%c",ch);  
	}
*/

