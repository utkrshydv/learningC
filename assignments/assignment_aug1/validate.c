#include <stdio.h>

typedef struct {
    int rollno;
    int marks;
} studentStruct;

typedef union {
    int rollno;
    float marks;
} studentUnion;

int main() {

    studentStruct s1;

    s1.rollno = 20;
    s1.marks = 90;
    
    printf("Using Structure: \n");
    printf("Roll Number: %d\n", s1.rollno);
    printf("Marks: %d\n", s1.marks);

    
    studentUnion s2;

    printf("Using Union: \n");

    s2.rollno = 20;
    printf("Roll Number: %d\n", s2.rollno);

    s2.marks = 90.0;
    printf("Marks: %.2f\n", s2.marks);

    printf("Roll Number after assigning marks: %d\n", s2.rollno);

    return 0;
}
