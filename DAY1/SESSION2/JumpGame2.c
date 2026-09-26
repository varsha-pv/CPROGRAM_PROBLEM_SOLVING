#include<stdio.h>
int canBallReachMin(int nums[],int n){
    int maxReach=0;
    int currentEnd=0;
    int count=-1;
    for(int i=0;i<n;i++){
        if(i>maxReach){
            return 0;
        }
        else{
            currentEnd=i+nums[i];
            if(currentEnd>maxReach){
                maxReach=currentEnd;
                count++;
            }
        }
        if(maxReach>=n){
            return count;
        }
    }
    return 0;
}
int main(){
    int nums[]={1,1,1,5};
    int n=sizeof(nums)/sizeof(nums[0]);
    printf("%d ",canBallReachMin(nums,n));
}