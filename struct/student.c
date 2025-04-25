#include <stdio.h>

struct Student{
    int roll;
    char name[50];
    char gender;
    float marks;
};

int main(){
    struct Student student1;

    printf("Details for Student 1\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Roll: ");
    scanf("%d", &student1.roll);
    getchar(); // Consume newline character
    printf("Gender: ");
    scanf("%c", &student1.gender);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    struct Student student2;

    printf("\nDetails for Student 2\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Roll: ");
    scanf("%d", &student2.roll);
    getchar(); // Consume newline character
    printf("Gender: ");
    scanf("%c", &student2.gender);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    printf("\nStudent Details 1: \n");
    printf("Name: %s\n", student1.name);
    printf("Roll: %d\n", student1.roll);
    printf("Gender: %c\n", student1.gender);
    printf("Marks: %.2f\n", student1.marks);

    printf("\nStudent Details 2: \n");
    printf("Name: %s\n", student2.name);
    printf("Roll: %d\n", student2.roll);
    printf("Gender: %c\n", student2.gender);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
