#include<stdio.h>
main(){
    int x=1,y;
    printf("Value of x = %d\n",x);
    y=x++;
    printf("Value of y = %d\n",y);
    printf("New value of x = %d\n",x);
    y=--x;
    printf("New value of y = %d\n",y);
    printf("New value of x = %d\n",x);
}