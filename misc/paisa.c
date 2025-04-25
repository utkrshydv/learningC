#include<stdio.h>
int main(){
    int rupees, amount, paisa;
    printf("Enter amount in paisa: ");
    scanf("%d",&amount);
    rupees = amount/100;
    paisa = amount%100;
    printf("You have %d rupees and %d paisa",rupees,paisa);
    return 0;
}