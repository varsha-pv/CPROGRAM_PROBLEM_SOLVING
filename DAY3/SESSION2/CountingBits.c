#include<stdio.h>
int countBits(int n){
    int count=0;
    while(n>0){
        int add=n&1;
        count += add;
        n=n>>1;
    }
    return count;
}
void countingBitsForN(int n){
    int result[100];
    for(int i=0;i<=n;i++){
        result[i]=countBits(i);
    }
    for(int i=0;i<=n;i++){
        printf("%d ",result[i]);
    }
}

int main(){
    int n=5;
    countingBitsForN(n);
}