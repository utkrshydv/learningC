#include <stdio.h>
int main()
{
    float a,b,r;
    char s;
    printf("Enter Operation: ");
    scanf("%c",&s);
    printf("Enter two numbers: ");
    scanf("%f%f",&a,&b);
    switch (s)
    {
    case '+': 
        printf("The Sum is %f", a+b);
        break;

    case '-':
        printf("The result is %f", a-b);
    default:
        break;
    }
} 