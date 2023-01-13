#include<stdio.h>
int main(){
    int nums[5],i;
    printf("Enter any five numbers\n");
    for(i=0;i<5;i++){
        scanf("%d",&nums[i]);
    }
    int max=nums[0];
    for(i=1;i<=4;i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    printf("Maximum number = %d\n",max);
    return 0;
}