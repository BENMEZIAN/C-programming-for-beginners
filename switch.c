#include <stdio.h>
#include <stdbool.h>

/*
switch statement:
------------------

simple switch case:
---------------------

	switch(<variable>){
		case 1:
			// statement
		break;
		
		case 2:
			// statement
		break;
		
		case 3:
			// statement
		break;
		
	
		
		case n:
			// statement
		break;
						
		default:
			// statement
	}
	
multiple switch case:
---------------------

	switch(<variable>){
		case 1:
		case 2:
		case 3:
		case 4:
			// statement
		break;
	
		case n-1:
		case n:
			// statement
		break;
						
		default:
			// statement
	}

*/


int main() {
	
	int number;
	
	printf("Enter a number:");
	scanf("%d",&number);
	
	switch(number){
		case 1:
			printf("Sunday");
		break;
		
		case 2:
			printf("Monday");
		break;
		
		case 3:
			printf("Tuesday");
		break;
		
		case 4:
			printf("Wednesday");
		break;
		
		case 5:
			printf("Thursday");
		break;
		
		case 6:
			printf("Friday");
		break;
		
		case 7:
			printf("Saturday");
		break;
		
		default:
			printf("Invalid number");
	}
	
	
	
	return 0;
}



	