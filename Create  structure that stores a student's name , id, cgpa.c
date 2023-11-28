#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float cgpa;
};

void bubbleSort(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].cgpa > arr[j + 1].cgpa) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);


    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("CGPA: ");
        scanf("%f", &students[i].cgpa);
    }
    bubbleSort(students, n);
    printf("\nSorted Student Information:\n");
    printf("%-20s %-10s %-5s\n", "Name", "ID", "CGPA");
    for (int i = 0; i < n; i++) {
        printf("%-20s %-10d %-5.2f\n", students[i].name, students[i].id, students[i].cgpa);
    }

    return 0;
}
