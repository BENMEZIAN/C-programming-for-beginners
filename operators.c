#include <stdio.h>
#include <math.h>

/*
	+  Addition
	
	-  Substraction
	
	*  Multiplication
	
	/  Division
	
	%  Remainder (with integer)
	
	fmod() Remainder (with double)
	
	++ Incrementation (by 1)
	
	-- Decrementation (by 1)
	
	(x++/x--) print the current value before increment (decrement)
	(++x/--x) increment (decrement) the value then print it

*/


int main() {
	
	// Addition operator (same thing for substraction)
   
   int x = 12; int y = 8; int result = x + 8;
   
   double n = 12.57;
   
   double res = n + y;
   
   printf("result = %d\n",result);
   
   printf("res = %lf",res);
   
   
	// Division operator (same thing for multiplication)
   
   double a = 12, b = 8;
   
   double c = a/b;
   
   double rem = fmod(a,b);
   
   printf("c = %lf\n",c);   
   
   printf("rem = %lf",rem);

	// Incrementation operator (same thing for decrementation)
   int x = 12;
  
   printf("-----------Prefix increment/decrement:---------------\n");
   
   printf("%d\n",x); // 12
   printf("%d\n",++x); // 13
   printf("%d\n",--x); // 12
  
   printf("-----------Postfix increment/decrement:---------------\n");
   
   printf("%d\n",x); // 12
   printf("%d\n",x++); // 12
   printf("%d\n",x--); // 13
   printf("%d\n",x); // 12

   
   return 0;
}

