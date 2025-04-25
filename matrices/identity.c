#include <stdio.h>

int isIdentity(int m, int n, int arr[m][n]){
        int flag =1;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    if(arr[i][j]==1){
                        flag=1;
                    }
                }
            }
        }
}
