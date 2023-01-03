#include<stdio.h>
main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    switch (n){
        case 1:
        printf("Hello\n");
        break;
        case 2:
        printf("Hi\n");
        break;
        case 3:
        printf("Welcome\n");
        break;
        default:
        printf("Bye");
    }
}