#include <stdio.h>
#include <stdbool.h>

/*
if....statement:
----------------

if (<condition>){
	// statement
}

if....else statement:
---------------------

if (<condition>){
	// statement inside if body
}else{
	// statement inside else body
}

if....else if statement:
------------------------

if (<condition>){
	// statement 1
}else if (<condition>){
	// statement 2
}else{
	// statement 3
}

Ternary Operator:
-----------------

<condition> ? <expression1> : <expression2>

*/


int main() {
	
	int age; int a = 8,b = 7;
	char operator = '+';
	
	printf("Enter you age:");
	scanf("%d",&age);
	
	// if condition
	if(age < 0 || age >= 130){
		printf("Invalid age");
	}else if(age >= 18){
		printf("You're eligible for voting\n");
	}else{
		printf("You're not eligible for voting\n");
	}
	
	// with ternary operator
	(age >= 18) ? printf("You're eligible for voting\n") : printf("You're not eligible for voting\n");
	
	(operator = '+') ? printf("%d",a+b) : printf("%d",a-b);
	
	
	
	return 0;
}


