#include <stdio.h>

/*

initialization :
----------------
int* ptr = <array_name>; or int* ptr = &<array_name>[0];

iteration:
----------

approach 1: int* ptr = <array_name>;

for ( i = 0; i < array_length; i++) {
		printf("Value of t[%d] = %d\n", i, *(ptr));
		ptr++;
}

approach 2: int* ptr = &<array_name>[0];

for ( i = 0; i < 5; i++) {
	printf("Value of t[%d] = %d\n", i, *(ptr+i));
}

*/



int main() {
	
	int t[5] = {10, 15, 20, 25, 30};
	int i; 
	int* ptr = t;
	int* p = &t[0];
	
	printf("-------First approach: int* ptr = t------------------\n");
	
	for ( i = 0; i < 5; i++) {
		printf("Value of t[%d] = %d\n", i, *(ptr));
		ptr++;
	}
	
	printf("-------Second approach: int* p = &t[0]------------------\n");
	
	for ( i = 0; i < 5; i++) {
		printf("Value of t[%d] = %d\n", i, *(p+i));
	}
	
	
	return 0;
}



	