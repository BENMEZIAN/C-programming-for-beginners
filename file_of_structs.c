#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
#include <conio.h>


typedef struct employee {
    int id;
    char name[30];
    int nss;
    double salary;
    char dep[10];
}employee;


// functions prototypes
void create_file(employee emp[],int n);
void display_records();
void append_record();
void search_record();
int number_rows();
void update_record();
void delete_record();
int getch();


int main() {

    int choice;
    employee emp[5];
    int n;
	
    do {
    	system("cls");
        printf("------Employee management system-------\n");
        printf("1. Create File\n");
        printf("2. Display Records\n");
        printf("3. Append Record\n");
        printf("4. Search Record\n");
        printf("5. Update Record\n");
        printf("6. Delete Record\n");
        printf("7. Exit\n");
        printf("---------------------------------------\n");
		printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printf("Donnez le nombre d'employees : ");
                	scanf("%d", &n);
                	create_file(emp, n);
                break;
            case 2: display_records();
                break;
            case 3: append_record();
                break;
            case 4: search_record();
                break;
            case 5: update_record();
                break;
            case 6: delete_record();
                break;
            case 7: printf("Exiting program.\n");
                break;
            default: printf("Invalid choice. Please try again.\n");
                break;
        }
        getch();
    } while (choice != 7);

    return 0;
}


void create_file(employee emp[],int n){
	
	FILE* fp;
	fp = fopen("file_structs.txt","w");
	
	if (fp == NULL) {
        perror("Error");
        printf("Could not open file, value of errno: %d\n", errno);
        printf("The error message is: %s\n", strerror(errno));
        exit(1);
	}
    
	for (int i = 0; i < n; i++) {
        printf("Donnez les informations de l'employee num : %d\n", i + 1);
		printf("L'identifiant:");
        scanf("%d", &emp[i].id);
        printf("Le nom : ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Le NSS : ");
        scanf("%d", &emp[i].nss);
        printf("Le salaire : ");
        scanf("%lf", &emp[i].salary);
        printf("Le departement : ");
        scanf(" %[^\n]s", emp[i].dep);
        //fprintf(fp,"%d %s %d %lf %s\n",emp[i].id,emp[i].name,emp[i].nss,emp[i].salary,emp[i].dep);
        
    }
    
    fwrite(emp,sizeof(employee),n,fp);
        
    printf("\n");
    
    fclose(fp);
}

void display_records(){
	
	FILE* fp;
    fp = fopen("file_structs.txt","r");
    employee emp;
	
	if (fp == NULL) {
        perror("Error");
        printf("Could not open file, value of errno: %d\n", errno);
        printf("The error message is: %s\n", strerror(errno));
        exit(1);
	}

	printf("-------------------------------------------------\n");
	
	if(number_rows() == 0){
		printf("empty file...\n");
	}else{
		while(fread(&emp,sizeof(employee),1,fp)){
    		printf("%d %s %d %.2lf %s\n", emp.id, emp.name, emp.nss, emp.salary, emp.dep);
		}
	}
    
	printf("-------------------------------------------------\n");
	    
    fclose(fp);
}

void append_record(){
	
	FILE* fp;
    fp = fopen("file_structs.txt","a");
    employee emp;
    int n;
    
    if (fp == NULL) {
        perror("Error");
        printf("Could not open file, value of errno: %d\n", errno);
        printf("The error message is: %s\n", strerror(errno));
        exit(1);
	}
	
	printf("Donner le nombre d'employees a ajouter:");
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++) {
        printf("Donnez les informations du nouvel employe :\n");
	    printf("L'identifiant:");
	    scanf("%d", &emp.id);
	    printf("Le nom : ");
	    scanf(" %[^\n]s", emp.name);
	    printf("Le NSS : ");
	    scanf("%d", &emp.nss);
	    printf("Le salaire : ");
	    scanf("%lf", &emp.salary);
	    printf("Le departement : ");
	    scanf(" %[^\n]s", emp.dep);   
    }
    
    printf("\n");
    
    fwrite(&emp,sizeof(employee),n,fp);
    
    fclose(fp);
    
}

int number_rows(){
	
	FILE* fp;
	fp = fopen("file_structs.txt","r");
    employee emp;
    
    fseek(fp,0,SEEK_END);
    int n = ftell(fp) / sizeof(employee);
    
    fclose(fp);
    
    return n;
}

void search_record(){
	
	FILE* fp;
	fp = fopen("file_structs.txt","r");
	int id;
	employee emp;
	bool found = false;
	
	printf("Entrer un identifiant:");
	scanf("%d",&id);
	
	while(fread(&emp,sizeof(employee),1,fp)){
		if(emp.id == id){
			found = true;
			printf("l'employee(s) cherche est: %d %s %d %lf %s\n",emp.id,emp.name,emp.nss,emp.salary,emp.dep);
			break;
		}
	}
	
	if(!found){
		printf("Record not found\n");
	}
	
	fclose(fp);
}

void update_record() {
	
    FILE* fp;
    FILE* tempFp;
    int id;
    employee emp;
    bool found = false;

    fp = fopen("file_structs.txt", "r");
    tempFp = fopen("temp_file.txt", "w");

    if (fp == NULL || tempFp == NULL) {
        perror("Error");
        printf("Could not open files.\n");
        exit(1);
    }

    printf("Enter the employee ID to update: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(employee), 1, fp)) {
        if (emp.id == id) {
            found = true;
            printf("Enter the updated information for employee %d:\n", emp.id);
            printf("Name: ");
            scanf(" %[^\n]s", emp.name);
            printf("NSS: ");
            scanf("%d", &emp.nss);
            printf("Salary: ");
            scanf("%lf", &emp.salary);
            printf("Department: ");
            scanf(" %[^\n]s", emp.dep);
        }
        fwrite(&emp, sizeof(employee), 1, tempFp);
    }

    if (!found) {
        printf("Record not found.\n");
    } else {
        printf("Record updated successfully.\n");
    }

    fclose(fp);
    fclose(tempFp);

    remove("file_structs.txt");
    rename("temp_file.txt", "file_structs.txt");
}

void delete_record(){
	
    FILE* fp;
    FILE* tempFp;
    int id;
    employee emp;
    bool found = false;

    fp = fopen("file_structs.txt", "r");
    tempFp = fopen("temp_file.txt", "w");

    if (fp == NULL || tempFp == NULL) {
        perror("Error");
        printf("Could not open files.\n");
        exit(1);
    }

    printf("Enter the employee ID to delete: ");
    scanf("%d", &id);

    while (fread(&emp, sizeof(employee), 1, fp)) {
        if (emp.id == id) {
            found = true;
            printf("Employee %d deleted.\n", emp.id);
        } else {
            fwrite(&emp, sizeof(employee), 1, tempFp);
        }
    }

    if (!found) {
        printf("Record not found.\n");
    }

    fclose(fp);
    fclose(tempFp);

    remove("file_structs.txt");
    rename("temp_file.txt", "file_structs.txt");
}

