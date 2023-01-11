#include<stdio.h>
void display(int nums[5]){
    for(int i=0;i<=4;i++){
        printf("%d ",nums[i]);
    }
}
int main(){
    int nums[5]={12,2,3,23,34};
    display(nums);
    return 0;
}