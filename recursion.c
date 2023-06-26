#include <stdio.h>


/*
Recursion:
----------
A function that calls itself is known as a recursive function. And, this technique is known as recursion.


void recurse()
{
    ... .. ...
    recurse();
    ... .. ...
}

int main()
{
    ... .. ...
    recurse();
    ... .. ...
}



*/


int sum(int n);



int main() {
	

	printf("-----------------recursion------------------\n");
	
	int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
	
	
	
	
	
	
	return 0;
}


int sum(int n) {
    if (n == 0) {
        return n;
    }  
    else { 
        // sum() function calls itself
        return n + sum(n-1); 
    }
}







