#include<stdio.h>
main(){
    int i,j,x=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=x;j++){
            printf("*");
        }
        x++;
        printf("\n");
    }
}