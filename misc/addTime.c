/*#include <stdio.h>

int main(){
    int hour,min,sec;
    int hour1,min1,sec1;
    int hour2,min2,sec2;

    printf("Enter Time 1: ");
    scanf("%d:%d:%d", &hour1, &min1, &sec1);

     printf("Enter Time 2: ");
    scanf("%d:%d:%d", &hour2, &min2, &sec2);

    sec = sec1+sec2;
    min = min1+min2+(sec/60);
    hour = hour1+hour2+(min/60);

    min%=60;
    sec%=60;

    printf("%d:%d:%d",hour,min,sec);
    return 0;
}*/

#include <stdio.h>

struct Time{
    int hours;
    int min;
    int sec;
};
int main(){
    struct Time time1,time2,result;

    printf("Time 1: ");
    scanf("%d:%d:%d",&time1.hours,&time1.min,&time1.sec);

    printf("Time 2: ");
    scanf("%d:%d:%d",&time2.hours,&time2.min,&time2.sec);

    result.sec = time1.sec + time2.sec;
    result.min = time1.min + time2.min + (result.sec/60);
    result.hours = time1.hours+time2.hours+(result.min/60);

    result.sec%=60;
    result.min%=60;

    printf("Sum: %d:%d:%d",result.hours,result.min,result.sec);
    return 0;
}