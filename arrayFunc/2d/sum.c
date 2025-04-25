#include <stdio.h>

int sum(int m, int n, int arr[m][n]){
    int result =0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            result+=arr[i][j];
        }
    }
    return result;
}

int main(){
    int r,c;
    printf("Row and column: ");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    printf("Enter elements: ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Sum is: %d", sum(r,c, arr));
    return 0;

}