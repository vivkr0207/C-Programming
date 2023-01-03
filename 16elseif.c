#include<stdio.h>
main(){
    int n;
    printf("Enter a nnumber\n");
    scanf("%d",&n);
    if(n<5){
        printf("Less than 5");
    }
    else if(n>5){
        printf("More than 5");
    }
    else{
        printf("Equal to 5");
    }
}