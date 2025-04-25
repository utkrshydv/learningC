#include <stdio.h>

struct time{
    int hour;
    int min;
    int sec;
};

int main(){
int sum;

    struct time time1;
    printf("Enter hours: ");
    scanf("%d", &time1.hour);
    printf("Enter minutes: ");
    scanf("%d", &time1.min);
    printf("Enter seconds: ");
    scanf("%d", &time1.sec);

     struct time time2;
    printf("Enter hours: ");
    scanf("%d", &time2.hour);
    printf("Enter minutes: ");
    scanf("%d", &time2.min);
    printf("Enter seconds: ");
    scanf("%d", &time2.sec);
    

    int secsum = time1.sec+time2.sec;
    int minsum = time1.min+time2.min+secsum/60;
    int hoursum = time1.hour+time2.hour+minsum/60;
    

    secsum = secsum%60;
    minsum = minsum%60;

    printf("Resultant time: %d hours:%d min:%d sec", hoursum, minsum, secsum);
    return 0;
}