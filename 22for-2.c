#include<stdio.h>
main(){
    int num;
    printf("Enter last natural number\n");
    scanf("%d",&num);
    printf("First %d natural numbers are \n");
    for(int i=1;i<=num;i++){
        printf("%d ",i);
    }
}