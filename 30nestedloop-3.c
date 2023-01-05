#include<stdio.h>
main(){
    int i,j,x=3,y=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=x;j++){
            printf(" ");
        }
        for(j=1;j<=y;j++){
            printf("*");
        }
        printf("\n");
        x--;
        y++;
    }
}
