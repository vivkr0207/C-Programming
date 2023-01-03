#include<stdio.h>
main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n<5){
        printf("%d is less than 5",n);
    }
    else{
        printf("%d is more than 5",n);
    }
}