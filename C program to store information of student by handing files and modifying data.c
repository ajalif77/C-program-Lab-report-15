#include <stdio.h>
#include <stdlib.h>
struct Student {
    int idNumber;
    char name[50];
    float cgpa;
};

void addStudentRecord(FILE *file) {
    struct Student student;

    printf("Enter ID Number: ");
    scanf("%d", &student.idNumber);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter CGPA: ");
    scanf("%f", &student.cgpa);
    fwrite(&student, sizeof(struct Student), 1, file);
    printf("Student record added successfully!\n");
}

void displayStudentRecords(FILE *file) {
    struct Student student;
    rewind(file);
    printf("\n--- Student Records ---\n");
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("ID Number: %d, Name: %s, CGPA: %.2f\n", student.idNumber, student.name, student.cgpa);
    }
    printf("------------------------\n");
}

void modifyStudentRecord(FILE *file) {
    int targetIdNumber;
    struct Student student;


    printf("Enter the ID Number of the student to modify: ");
    scanf("%d", &targetIdNumber);
    rewind(file);
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        if (student.idNumber == targetIdNumber) {

            printf("Enter the new Name: ");
            scanf("%s", student.name);
            printf("Enter the new CGPA: ");
            scanf("%f", &student.cgpa);


            fseek(file, -sizeof(struct Student), SEEK_CUR);
            fwrite(&student, sizeof(struct Student), 1, file);
            printf("Student record modified successfully!\n");
            return;
        }
    }


    printf("Student with ID Number %d not found!\n", targetIdNumber);
}

int main() {
    FILE *file;
    int choice;


    file = fopen("student_records.dat", "ab+");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {

        printf("\n--- Menu ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Modify Student Record\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                addStudentRecord(file);
                break;
            case 2:
                displayStudentRecords(file);
                break;
            case 3:
                modifyStudentRecord(file);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (choice != 4);


    fclose(file);

    return 0;
}

