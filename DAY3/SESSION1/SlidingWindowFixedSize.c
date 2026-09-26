#include<stdio.h>
void windowSumMax(int arr[] , int n,int k){
    int left=0;
    int right=k-1;
    int sum=0;
    int maxSum=0;
    for(int i=left;i<=right;i++){
        sum += arr[i];
    }
    while(right<=n-1){
        sum =sum-arr[left];
        left++;
        right++;
        sum =sum+arr[right];
        if(sum>maxSum){maxSum=sum;}
    }
    printf("%d\n", maxSum);
}

int main(){
    int arr[]={2,1,5,1,3,2};
    int n=6;
    int k=3;
    windowSumMax(arr,n,k);
}