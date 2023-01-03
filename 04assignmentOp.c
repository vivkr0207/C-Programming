#include<stdio.h>
main(){
    int a=5, b=a;
    printf("%d\t %d\n",a,b);
    a=b=6;
    printf("%d\t %d",a,b);
}
