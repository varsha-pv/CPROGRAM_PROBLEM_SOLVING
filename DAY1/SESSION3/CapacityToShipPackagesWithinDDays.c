#include<stdio.h>
int minSpeed(int bunches[],int n,int h){
    int left=bunches[0];
    int right=0;
    for (int i = 0; i < n; i++) {

        if (bunches[i] > left)
            left = bunches[i];

        right += bunches[i];
    }
        int speed=right;
        while(left<=right){
            int mid=left+(right-left)/2;
            int totalDays=1;
            int currentWeight=0;
            for(int i=0;i<n;i++){
            if (currentWeight + bunches[i] <= mid) {
                currentWeight += bunches[i];
            }
            else {
                totalDays++;
                currentWeight = bunches[i];
            }
            }
            if(totalDays<=h){
                speed=mid;
                right=mid-1;}
            else{left=mid+1;}
        }
        return speed;
}
int main(){
    int bunches[]={1,2,3,4,5,6,7,8,9,10};
    int h=5;
    printf("%d",minSpeed(bunches,10,h));
}