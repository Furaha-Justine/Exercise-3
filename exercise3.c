#include <stdio.h>

#define NUM_STUDENTS 10

struct Student {
    char name[50];
    float subj1, subj2, subj3;
    char grade;
};

void calculateGrade(struct Student *s) {
    float avg = (s->subj1 + s->subj2 + s->subj3) / 3.0;
    if (avg >= 90) s->grade = 'A';
    else if (avg >= 80) s->grade = 'B';
    else if (avg >= 70) s->grade = 'C';
    else if (avg >= 60) s->grade = 'D';
    else s->grade = 'F';
}

int main() {
    struct Student students[10];

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name);
        printf("Enter marks for Subject 1: ");
        scanf("%f", &students[i].subj1);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &students[i].subj2);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &students[i].subj3);

        calculateGrade(&students[i]);
    }

    printf("\nStudent Details:\n");
    printf("---------------------------------------------\n");
    printf("Name\tSubj1\tSubj2\tSubj3\tGrade\n");
    printf("---------------------------------------------\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%s\t%.2f\t%.2f\t%.2f\t%c\n", students[i].name, students[i].subj1, students[i].subj2, students[i].subj3, students[i].grade);
    }
}
