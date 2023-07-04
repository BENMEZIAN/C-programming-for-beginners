#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


typedef struct Etudiant {
    int id;
    int age;
    char name[30];
}Etudiant;


int main() {
	
	Etudiant * e;
	int n;
	
	printf("Donner le nombre d'etudiants:");
	scanf("%d",&n);
	
	e = (Etudiant*)malloc(n * sizeof(Etudiant));
	
	for(int i = 0;i<n;i++){
		printf("Donner les informations:");
		printf("Le matricule:");
		//scanf("%d",&(e[i].id)); // &(e + i)->id
		scanf("%d",&(e + i)->id);
		printf("L'age:");
		scanf("%d",&(e[i].age)); // &(e + i)->age
		printf("Le nom:");
		scanf("%s",e[i].name);	// (e + i)->name
	}
	
	printf("Informations des etudiants:\n");
	
    for (int i = 0; i < n; i++) {
        printf("Etudiant %d:\n", (e + i)->id);
        printf("  Matricule: %d\n", (e + i)->age);
        printf("  Nom: %s\n", (e + i)->name);
        printf("\n");
    }
	
    return 0;
}




