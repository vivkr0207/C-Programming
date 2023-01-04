#include<stdio.h>
main(){
    int n,c=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n>0){
        c++;
        n/=10;
    }
    printf("Number of digits =%d",c);
}