#include <stdio.h>
#include <stdbool.h>

/*
break statement:
----------------
The break statement ends the loop immediately when it is encountered. Its syntax is: break;
The break statement is almost always used with if...else statement inside the loop.

continue statement:
-------------------
The continue statement skips the current iteration of the loop and continues with the next iteration. Its syntax is: continue;
The continue statement is almost always used with the if...else statement.

*/


int main() {
	

	printf("-----------------break statement------------------\n");
	
	int i;
	
	for(i = 1;i <= 10;i++){
		if(i == 3){
			break;
		}
		printf("%d\n",i);
	}	// 1 2
	
	printf("--------------------------------------\n");
	
	i = 1;
	
	while(i <= 10){
		if(i == 3){
			break;
		}
		printf("%d\n",i);
		i++;
	}	// 1 2
	
	printf("-----------------continue statement------------------\n");
	
	
	for(i = 1;i <= 10;i++){
		if(i == 3){
			continue;
		}
		printf("%d\n",i);
	}	// 1 2 4 5 6 7 8 9 10
	
	printf("--------------------------------------\n");
	
	i = 1;
	
	while(i <= 10){
		if(i == 3){
			i++;
			continue;
		}
		printf("%d\n",i);
		i++;
	}	// 1 2 4 5 6 7 8 9 10
	
	printf("------------------Task--------------------\n");
	
	
	
	while(1){
		int n;
		printf("give a number:");
		scanf("%d",&n);
		
		if(n <= 0){
			break;
		}
		
		if(n > 0){
			printf("you have entered %d\n",n);
			continue;
		}

	}
	
	
	
	return 0;
}



	