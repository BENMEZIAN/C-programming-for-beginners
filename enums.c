#include <stdio.h>
// <>

/*

Definition of enumeration:
--------------------------
Syntax: enum <enumType> {constant1,constant1,constant1,.........................};

or: enum <enumType> {constant1 = ... ,constant2 = ... ,constant3 = ..., .........................};

example: enum size{Small,Medium,Large,ExtraLarge};

Declaration of enum:
--------------------

Syntax: enum <enumType> <var>;

*/

// states:  0		1		2		3		4		5		6	
enum Week{Sunday,Monday,Tuesday,Wedensday,Thursday,Friday,Saturday};

enum Size{Small = 27, Medium = 31, Large = 40, ExtraLarge = 45};

enum year{Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7,Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};

int main() {
	
	printf("----------Days------------------------------------\n");
	
	enum Week day;
	
	day = Sunday;
	
	printf("%d\n",day);	// 0
	
	int j;
	for (j=Sunday; j<=Saturday; j++){
		printf("%d ", j); 	// 
	}
	
	printf("\n----------Sizes------------------------------------\n");
	
	enum Size size1 = Small;
	enum Size size2 = Medium;
	enum Size size3 = Large;
	enum Size size4 = ExtraLarge;
	
	printf("\n%d\n",size1);	// 27
	printf("%d\n",size2);	// 31
	printf("%d\n",size3);	// 40
	printf("%d\n",size4);	// 45
	
	for (j=Small; j<=ExtraLarge; j++){
		printf("%d ", j); 	// 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45
	}
	
	
	printf("\n----------Months------------------------------------\n");
	
	int i;
	for (i=Jan; i<=Dec; i++){
		printf("%d ", i);	// 1 2 3 4 5 6 7 8 9 10 11 12
	}
	
		
	return 0;
}




