// Program to explain variables
 
#include <stdio.h>

/*
	int        (4 bytes)  | %d for printing
	
	double     (8 bytes)  | %lf for printing
	
	float      (4 bytes)  | %f for printing
	
	char       (1 byte)   | %c for printing
	
	sizeof(variable)      | %zu for printing
*/



 
int main() {
	
	int age = 25; // Declare and Assign Value together
	
	printf("Age: %d\n",age); // Print the variable
	
		// Change the variable
	age = 31;
	
	printf("\nNew age: %d",age);
	
	
	// create double type variable
	double number= 36.43;
	
	// print the variable with multiple formats
	printf("number: %lf", number);    // 36.430000
	printf("\nnumber with 2 digits after the comma: %.2lf\n", number);  // 36.43
	printf("number with no digits after the comma: %.lf", number);   // 36
	
	
	int firstNumber = 33;
	int secondNumber = firstNumber; // Assign one variable to another variale
	
	printf("\nfirstNumber = %d",firstNumber);
	printf("\nsecondNumber = %d",secondNumber);
	
	printf("\nsize of age is: %zu",sizeof(age));
	printf("\nsize of number is: %zu",sizeof(number));
	printf("\nsize of first number is: %zu",sizeof(firstNumber));
	printf("\nsize of second number is: %zu",sizeof(secondNumber));
	
	int a,b,c; // Declaring Multiple variables at Once
	
 
  return 0;
}