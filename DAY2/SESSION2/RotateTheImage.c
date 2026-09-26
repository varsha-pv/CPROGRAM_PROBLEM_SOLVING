#include<stdio.h>
int main(){
    int n=3;
    int temp[3][3];
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int t=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=t;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}