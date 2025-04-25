#include <stdio.h>
//convert twoD to oneD
int oneD(int m, int n, int one[], int two[m][n]){
    int p=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            one[p++] = two[i][j];
        }
    }
}

//using bubble sort
int sort(int one[], int size){
    int temp;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(one[i]>one[j]){
               temp = one[i];
               one[i] = one[j];
               one[j] = temp;
            }
        }
    }
}

//oneD to twoD
int convert(int m, int n, int two[m][n], int one[]){
    int k=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            two[i][j] = one[k++];
        }
    }
     for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", two[i][j]);
        }
        printf("\n");
    }
}




int main(){
    int r,c;
    printf("Rows and columns: ");
    scanf("%d%d", &r,&c);
    int arr[r][c];
    int one[r*c];
    printf("enter elements: ");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    oneD(r,c,one,arr);
    sort(one, r*c);
     printf("Sorted array: \n");
    convert(r, c, arr, one);

    return 0;
}