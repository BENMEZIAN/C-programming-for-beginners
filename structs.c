#include <stdio.h>


/*

Definition of struct type:
--------------------------
Syntax: typedef struct <typeName>{
	dataType varName1;
	dataType varName2;
		......
	dataType varNameN;
}<typeName>;

example:
---------
typedef struct person{
	int age;
	double salary;
}person;

Declaration of struct variable:
-------------------------------
Syntax: <typeName> var;

example:
-------- 
person prs;

Access and set members:
-----------------------

Syntax: var.member = value;

example:
--------

prs.age = 25;
prs.salary = 30.00;
	
printf("Age = %d\n",prs.age);
printf("Salary = %.2lf\n",prs.salary);


*/


typedef struct complex{
	double real;
	double imagine;
}complex;



	// <>
int main() {
	
	complex c1,c2;
	
	c1.real = 15.67;
	c1.imagine = 30.00;
	
	c2.real = 19.00;
	c2.imagine = 56.89;
	
	printf("c3 = %.2lf + i%.2lf",c1.real+c2.real,c1.imagine+c2.imagine);
	
	
	
	
	return 0;
}




