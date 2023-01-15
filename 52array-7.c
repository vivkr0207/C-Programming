#include<stdio.h>
int main(){
    int nums[5],pos=-1,num,i;
    printf("Enter any five numbers\n");
    for(i=0;i<=4;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter a number to be searched\n");
    scanf("%d",&num);
    for(i=0;i<=4;i++){
        if(nums[i]==num){
            pos=i;
            printf("%d is present in array at index %d",num,pos);
            break;
        }
    }
    if(pos==-1){
        printf("%d is not present",num);
    }
}