#include <stdio.h>
#include <string.h>

/*

strlen(string) ==> length of string
strcpy(dest,src) ==> copy from src to dest
strcat(text1,text2) ==> concatenate two strings
strcmp(text1,text2) ==> compare between two strings

*/

int main() {
	
	char str[] = "Programiz";
	
	char word[15];	// variable word has size 15
	
	char name[30];
	
	printf("Give your full name:");
	fgets(name,sizeof(name),stdin);
/*	
	name[0] = 'X';
	
	printf("%s",name);
*/
	
	printf("%zu",strlen(name));	// length = 11
	printf(" %d",strlen(name));	// length = 11
	
	
	printf("Enter a string:");
	//scanf("%s",word); // no need to use & because word[] is already an address, however it ignores the whitespace
	
	fgets(word,sizeof(word),stdin);	// it takes all the string, \n will automatically be generated
	
	printf("%s",word);	// abdelmalek
	
	printf("%c\n",word[0]);	// a
	
	str[4] = 'd';	// change character value
	
	printf("%s",str);
	
	
	return 0;
}

/*



char food1[20];
char food2[20];
  
printf("Enter the first food: ");
fgets(food1, sizeof(food1), stdin);
  
printf("Enter the second food: ");
fgets(food2, sizeof(food2), stdin);
  
if (strlen(food1) > strlen(food2)) {
    printf("Longest Food Name: %s", food1);
}else{
    printf("Longest Food Name: %s\n", food2);
  }



*/
