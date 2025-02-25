#include <stdio.h>

#define NUM_STUDENTS 10

int main() {
    char names[NUM_STUDENTS][50];
    float subj1[NUM_STUDENTS], subj2[NUM_STUDENTS], subj3[NUM_STUDENTS];
    char grades[NUM_STUDENTS];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", names[i]);
        printf("Enter marks for Subject 1: ");
        scanf("%f", &subj1[i]);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &subj2[i]);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &subj3[i]);

        float avg = (subj1[i] + subj2[i] + subj3[i]) / 3.0;
        if (avg >= 90) grades[i] = 'A';
        else if (avg >= 80) grades[i] = 'B';
        else if (avg >= 70) grades[i] = 'C';
        else if (avg >= 60) grades[i] = 'D';
        else grades[i] = 'F';
    }

    printf("\nStudent Details:\n");
    printf("---------------------------------------------\n");
    printf("Name\tSubj1\tSubj2\tSubj3\tGrade\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\t%c\n", names[i], subj1[i], subj2[i], subj3[i], grades[i]);
    }
    return 0;
}

