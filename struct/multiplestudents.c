#include <stdio.h>

struct Students{
    int roll;
    char name[50];
    char gender;
    float marks[5];
};

void displayStudents(struct Students student[], int n){
    for(int i=0; i<n; i++){
    printf("Student %d information: \n", i+1);
    printf("Roll: %d", student[i].roll);
    printf("Name: %s", student[i].name);
    printf("Gender: %c",student[i].gender);
    printf("Passed subjects: ");
    for(int j=0; j<5; j++){
        if(student[i].marks[j]>=40){
            printf("Passed in subject %d", j+1);
        }
    }

    printf("Failed subjects: ");
    for(int k=0; k<5; k++){
        if(student[i].marks[k]<40){
            printf("Failed in subject %d", k
            +1);
        }
    }
    
    }
}









int main(){
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Students  student[n];
    for(int i=0; i<n; i++){
    printf("Student %d Information: ", i+1);
    printf("Roll No. : ");
    scanf("%d", &student[i].roll);
    printf("Name: ");
    scanf("%s", &student[i].name);
    printf("Gender: ");
    scanf(" %c", &student[i].gender);
    printf("Enter marks in 5 subjecs: \n");

    for(int j=0; j<5; j++){
        printf("Subject %d: ", j+1);
        scanf("%f", &student[i].marks[j]);
    }
}
displayStudents(student, n);
}