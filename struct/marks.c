#include <stdio.h>

#define MAX_SUBJECTS 5
#define PASS_MARK 40

struct Student {
    int rollNo;
    char name[50];
    char gender;
    float marks[MAX_SUBJECTS];
};

void displayStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        float totalMarks = 0;
        printf("\nStudent Information:\n");
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Gender: %c\n", students[i].gender);
        printf("Marks:\n");
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            printf("Subject %d: %.2f\n", j + 1, students[i].marks[j]);
            totalMarks += students[i].marks[j];
        }
        printf("Total Marks: %.2f\n", totalMarks);

        printf("Failed Subjects:\n");
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            if (students[i].marks[j] < PASS_MARK) {
                printf("Subject %d\n", j + 1);
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
        printf("\nEnter Student %d Information:\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Enter Name: ");
        scanf("%s", students[i].name);
        printf("Enter Gender: ");
        scanf(" %c", &students[i].gender);
        printf("Enter Marks for %d Subjects:\n", MAX_SUBJECTS);
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            printf("Enter Marks for Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
        }
    }

    displayStudents(students, n);

    return 0;
}
