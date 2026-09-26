#include<stdio.h>
#include <stdlib.h>
void spiralOrder(int n){
    int** matrix=(int**)malloc(9*sizeof(int*));
    int top=0;
    int left=0;
    int bottom=n-1;
    int right=n-1;
    int num=1;
    for(int i=0;i<n;i++){
        matrix[i]=malloc(n*sizeof(int));
    }
    while(top<=bottom&&left<=right){
        //left-->right
        for(int i=left;i<=right;i++){
            matrix[top][i]=num++;    
        }
        top++;

        //top-->bottom
        for(int i=top;i<=bottom;i++){
            matrix[i][right]=num++;
        }
        right--;

        //right-->left
        for(int i=right;i>=left;i--){
            matrix[bottom][i]=num++;
        }
        bottom--;

        //bottom-->top
        for(int i=bottom;i>=top;i--){
            matrix[i][left]=num++;
        }
        left++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    free(matrix);
}
int main(){
    int n=3;
    spiralOrder(n);
}