#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// return pointer to integer
int* func_arr(int n);


int main() {
	
	int* array = func_arr(5);
	
	printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    free(array);  // Freeing the dynamically allocated memory
	
	
	return 0;
}


int* func_arr(int n){
	
	int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Assigning values to the array
    }

    return arr;	
}

