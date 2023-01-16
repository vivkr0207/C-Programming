#include<stdio.h>
int main(){
    int nums[5],c=0,num,i;
    printf("Enter any five numbers\n");
    for(i=0;i<=4;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter a number to be searched\n");
    scanf("%d",&nums[i]);
    for(i=0;i<=4;i++){
        if(nums[i]==num){
            c++;
        }
    }
    if(c==1){
        printf("%d is present 1 time",num);
    }
    else if(c>1){
        printf("%d is present %d times",num,c);
    }
    else{
        printf("%d is not present",num);
    }
    return 0;
}
