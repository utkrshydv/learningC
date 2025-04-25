#include <stdio.h>
#include <math.h>

int add(int x){
    int sum =0;
    for(int i=1; i<=x; i++){
        sum+=pow(i,i);
    }
    printf("%d", sum);
}
 int main(){
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);
    add(n);
    return 0;
 }