#include <stdio.h>

int main() {
	
	int age;
	double number;
	char letter;
	char c;
	char string[20];
	
	
	printf("Enter input value:");
	scanf("%d",&age);
	
	printf("Enter double value:");
	scanf("%lf",&number);
	
	printf("Enter character value:");
	scanf(" %c",&letter);   // Note the space before %c to consume any whitespace characters
	
	printf("Age = %d\n",age);
	printf("Number = %lf\n",number);
	printf("Letter = %c\n",letter); 

    printf("I'm waiting for a character: ");
    while ((c = getchar()) != '\n' && c != EOF); // Flush the input buffer

    c = getchar();
    printf("c = %c\n",c);
    
    printf("Enter a string: ");
    getchar();  // Clear the newline character from the previous input
    fgets(string, sizeof(string), stdin);
	printf("String = %s", string);
 
  return 0;
}