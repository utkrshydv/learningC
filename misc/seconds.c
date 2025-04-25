#include<stdio.h>
int main(){
    int sec,a,b,sec2;
    int hour, min,temp;
    printf("Time in seconds: ");
    scanf("%d",&sec);
    hour = sec/3600;
    a = sec - (hour*3600);
    min = a/60;
    sec2 = a - (min*60);
    printf("%d seconds is %d hour, %d minutes and %d seconds ",sec,hour,min,sec2);
    return 0;
}