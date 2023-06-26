#include <stdio.h>

/*

Arrays:
-------
An array is a variable that can store multiple values. For example, if you 
want to store 100 integers, you can create an array for it

example: int data[100]; 

Declaration of an array: 
------------------------
Syntax : dataType arrayName[arraySize];

example: float mark[5]; // array of marks has size 5

How to initialize an array:
---------------------------
It is possible to initialize an array during declaration. For example: int mark[5] = {19, 10, 8, 17, 9};

You can also initialize an array like this, int mark[] = {19, 10, 8, 17, 9};

Here, we haven't specified the size. However, the compiler knows its size is 5 as we are initializing it with 5 elements.

Access array element:
---------------------
You can access elements of an array by indices as well as this syntax: arrayName[index]

Suppose you declared an array mark as above. 
* The first element is mark[0], the second element is mark[1] and so on.
* Arrays have 0 as the first index, not 1. In this example, mark[0] is the first element.
* If the size of an array is n, to access the last element, the n-1 index is used. In this example, mark[4]

Assign values:
--------------
Syntax: arrayName[index] = value;

the array shouldn't be initialized during declaration.

*/


	// <>
int main() {
	
	float marks[5],sum = 0,average; int n,i;
	
	printf("Enter five marks:");
	scanf("%d",&n);	
	
	for(i = 0;i < n;i++){
		printf("Enter a mark:");
		scanf("%f",&marks[i]);
		sum = sum + marks[i];
	}
	
	average = sum/n;
	
	printf("Your average is: %.2f",average);	
	
	
	
	

	
	return 0;
}







