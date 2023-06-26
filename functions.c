#include <stdio.h>
#include <math.h>

/*
functions:
----------
A function is a block of code that performs a specific task.

Suppose, you need to create a program to create a circle and color it. You can create two functions to solve this problem:

1-create a circle function
2-create a color function

Dividing a complex problem into smaller chunks makes our program easy to understand and reuse.

Syntax:
-------
returnType nameFunction(<parameters>){
	// code
}

if (returnType is void){
	
	void namefunction((<parameters>){
		// code
	}

}else{
	
	returnedType namefunction((<parameters>){
		// code
		
		return expression;
	}

}

Calling a function at the main:
-------------------------------
case 1 (returned type): var = nameFunction(parameters)  var should have the same type of returned value from the function
case 2 (void type) : nameFunction(parameters)

returned type : int,float, double, char, string, boolean

Advantages of user-defined function:
------------------------------------
1- The program will be easier to understand, maintain and debug.
2- Reusable codes that can be used in other programs
3- A large program can be divided into smaller modules. Hence, a large project can be divided among many programmers.

Variable scope:
---------------

Local variables: variables that are declared within the function block and can be used only within the function are called local variables.
Global variables: Variables declared outside the function block and accessed inside the function are called global variables.

*/

int var;	// that a global varible which accessed by any function in this program (main,square,Square,multiplication)


// function prototype
void greet();
void square(int n);
int Square(int n);
int multiplication(int a,int b);

int main() {
	

	printf("-----------------functions------------------\n");
	
	int n,s;
		
	greet();
	
	printf("give a number:");
	scanf("%d",&n);
	
	// calling the void functionn	
	square(n);
	
	// calling the returned type function
	s = Square(n);
	
	printf("square of %d is %d\n",n,s);
	
	float res = sqrt(s); // sqrt is a standard library function existing in the <math.h> library
	
	printf("square root of %d is %f\n",s,res);
	
	int multip = multiplication(n,s);
	
	printf("multiplication of %d and %d is %d",n,s,multip);
	
	
	
	
	
	return 0;
}

// function without parameters
void greet(){
	printf("Hello world\n");
}

// function with parameters
void square(int n){	// void type
	
	int s = n * n;
	printf("square of %d is %d\n",n,s);
}

int Square(int n){	// returend type (int)
	int s = n * n;
	return s;
}

int multiplication(int a,int b){
	return a * b;
}



	