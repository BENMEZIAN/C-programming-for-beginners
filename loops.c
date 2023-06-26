#include <stdio.h>
#include <stdbool.h>

/*
Loops:
------

while loop:
-----------

while(<condition>){
	// statement
}

for loop:
---------

for(initvar; testcondition; updatevar){
	// statement
}


*/


int main() {
	
	printf("-----------------while loop------------------\n");
	int number = 10,i = 1;
	
	int n;
	
	while(i <= number){
		printf("Hello, world!\n");
		i++;
	}
	
	// Multiplication number
	printf("Give a number:");
	scanf("%d",&n);
	
	i = 1;
	
	while(i <= number){
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	
	printf("-----------------for loop------------------\n");
	
	for(int j = 0;j <= 10;j++){
		printf("Hello world\n");
	}
	
	for(int j = 0;j <= 10;j++){
		printf("%d\n",j);
	}
	
	int sum = 0;
	
	for(int j = 1;j <= 100;j++){
		sum = sum + j;
	}
	
	printf("%d",sum);
	
	
	return 0;
}



	