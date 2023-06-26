#include <stdio.h>
#include <stdbool.h>

/*

Boolean type : bool <nameVar>

%d	for print the boolean value (0 or 1)

Comparison:
------------
There are 3 syntaxes of comparison:
1- var1 operator var2
2- value operator value
3- var operator value

Comparison operators:
---------------
	>	Greater than
	
	<	less than
	
	==	Equal to
	
	>=	Greater than or equal to
	
	<=	Less than or equal to
	
	!=	Not equal to
	
Logical operators:
------------------
	&&	AND
	
	||	OR
	
	!	NOT

*/


int main() {

	
	printf("------comparison operators---------------------\n");
	
	bool value = true;
	bool value1 = false;
	
	printf("%d\n",value);  	// 1
	printf("%d\n",value1);  // 0

	
	bool result = (12 > 9); // 1	same for (12 >= 9)
	bool res = (5 < 9);  	// 1	same for (5 <= 9)
	bool res1 = (9 == 9);  	// 1
	bool res2 = (6 != 9);  	// 1
	
	printf("%d ",result);
	printf(" %d ",res);
	printf(" %d ",res1);
	printf(" %d",res2);
	
	printf("\n------logical operators---------------------\n");
	
	int age = 18;
	double height = 6.3;
	
	bool And = (age >= 18) && (height > 6.0);	// 1 && 1 ==> 1
	
	bool Or = (age >= 18) || (height > 5.0);	// 1 || 0 ==> 1
	
	bool Not = !(age >= 18);					// !1 ==> 0
		
	printf("%d ",And);

	printf(" %d ",Or);
	
	printf(" %d",Not);
	
	
	
	
	return 0;
}


