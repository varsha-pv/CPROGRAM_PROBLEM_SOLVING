#include<stdio.h>                   //fibonacci
int ClimbingStairs70(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return ClimbingStairs70(n-1)+ClimbingStairs70(n-2);
    }
}
int main(){
    int n=4;
    printf("%d",ClimbingStairs70(n));
}