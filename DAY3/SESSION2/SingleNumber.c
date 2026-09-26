#include<stdio.h>
int singleNumber(int *nums,int n){
    int result=0;
    for(int i=0;i<n;i++){
        result=result^nums[i];
    }
    return result;
}

int main(){
    int nums[]={4,1,2,1,2};
    int n=5;
    printf("%d",singleNumber(nums,n));
}