#include <stdio.h>


/*
Implicit Type Conversion (automatic type conversion):
-----------------------------------------------------
* Done by the compiler on its own, without any external trigger from the user.
* Generally takes place when in an expression more than one data type is present. 
In such conditions type conversion (type promotion) takes place to avoid loss of data.
* All the data types of the variables are upgraded to the data type of the variable with the largest data type.

bool -> char -> short int -> int -> 
unsigned int -> long -> unsigned -> 
long long -> float -> double -> long double

* It is possible for implicit conversions to lose information, signs can be lost 
(when signed is implicitly converted to unsigned), and overflow can occur 
(when long is implicitly converted to float).


Explicit type coversion:
-------------------------
This process is also called type casting and it is user-defined.
Here the user can typecast the result to make it of a particular data type. 
The syntax in C Programming:	(type) expression
Type indicated the data type to which the final result is converted.

Disadvantages of type conversions in C programming:
---------------------------------------------------
*Loss of precision: Converting data from a larger data type to a smaller data type can result in loss 
of precision, as some of the data may be truncated.

*Overflow or underflow: Converting data from a smaller data type to a larger data type can result in overflow or underflow 
if the value being converted is too large or too small for the new data type.

*Unexpected behavior: Type conversions can lead to unexpected behavior, such as 
when converting between signed and unsigned integer types, or when 
converting between floating-point and integer types.

*Confusing syntax: Type conversions can have confusing syntax, particularly when using typecast operators 
or type conversion functions, making the code more difficult to read and understand.

*Increased complexity: Type conversions can increase the complexity of your code, making it harder to debug and maintain.

*Slower performance: Type conversions can sometimes result in slower performance, particularly when converting data between complex data 
types, such as between structures and arrays.

*/


int main() {

	printf("--------------Implicit type coversion--------------\n");
	
	// integer + char
	int a = 9;
	char b = '5'; // converted to ASCII number then take that integer value (53)
	int c = a + b;
	
	printf("c = %d\n",c);


	// integer + double
	double x = 14.54;
	int y = 9;
	
	int res = x + y;  // y is converted to double then it happens the sum casted into integer (type of the output variable)
	double result = x + y; 
	
	printf("res = %d\n",res); // 23
	printf("result = %lf\n",result); // 23.540000

	printf("--------------Explicit type coversion--------------\n");
	
	double z = 1.2;
	int w = 5;
   
    int sum = (int)z + 1; // Explicit conversion from double to int
    double num = (double)w + 5; // Explicit conversion from int to doubble
    
    printf("sum = %d\n", sum);
	printf("num = %lf\n", num);
	
	int m = 9;
	int n = 2;
	
	double k = m/n; // (integer division then the result converted into double)
	double l = (double)m/n; // (the integer value (n) is converted into double then the operation becomes a simple division for double)
	
	printf("k = %lf\n",k); // k = 4.000000
	printf("l = %lf",l); // l = 4.500000
	
	
	
	
	return 0;
}



