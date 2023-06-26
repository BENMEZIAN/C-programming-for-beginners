#include <stdio.h>

/*

Pointers:
---------
Is variable that holds an adderss of another variable.

Delaration of pointer:
----------------------

Syntax : dataType * ptr;

Assignement:
-------------

Syntax : ptr = &var;

Display address:
----------------
using the %p or %x

printf("%p\n",ptr);
printf("%x\n",ptr);

Access value using pointer:
---------------------------

using the astrix : (*ptr)

Change value using pointer:
---------------------------

(*ptr) = <newValue>;

Mistakes in pointers:
---------------------

int *ptr = &var; // wrong declaration

int* ptr = &var; // right declaration

int * ptr = &var; // right declaration

*/


int main() {

	
	int var = 25;
	int* ptr = &var; // int * ptr = &var;
/*
	printf("Address = %x\n",ptr);
	
	printf("Value = %d\n",(*ptr));
	
	*ptr = 31;
	
	printf("Value = %d\n",(*ptr));
*/	
	double salary;
	double* ptrSalary = &salary;
	
	printf("give me your salary:");
	scanf("%lf",&salary);
	
	printf("You're salary is: %lf\n",(*ptrSalary));
	
	(*ptrSalary) = (*ptrSalary) * 2;
	
	printf("You're salary has became: %lf\n",(*ptrSalary));
	
	
	
	return 0;
}





