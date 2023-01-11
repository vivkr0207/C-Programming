#include<stdio.h>
void display(int num){
    printf("%d",num);
}
int main(){
    int nums[5]={12,2,3,23,34};
    display(nums[3]);
    return 0;
}