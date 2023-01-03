#include<stdio.h>
main(){
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    if(a>=0 && a<=100){
        if(a>=18){
            printf("Adult");
        }
        else{
            printf("Not adult");
        }
    }
    else{
        printf("Invalid age");
    }
}