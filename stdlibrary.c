#include <stdio.h>
#include <math.h>	// for numbers
#include <ctype.h>	// for characters

/*

standard library functions:
---------------------------

<math.h> : sqrt(), cbrt(), pow(), 


*/


int main() {
	

	printf("-----------------standard library functions------------------\n");

	int n = 25;
	int m = 27;  int a = 2,b = 3;
	
	printf("square root of %d is %f\n",n,sqrt(n));
	printf("cube root of %d is %f\n",m,cbrt(m));
	printf("power of %d on %d is %f",a,b,pow(a,b));
	
	printf("\n--------------------------------------------------------\n");
	
	char alph = 'e';
	
	char upper = toupper(alph);
	printf("%c", upper);
	
	char lower = tolower(upper);
	printf("\n%c", lower);
	
	
	
	
	return 0;
}

	