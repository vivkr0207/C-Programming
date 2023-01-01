#include<stdio.h>
main(){
    int a;
    a=2<3 && 2>5;
    printf("%d\n",a);
    a=2>3 || 2<5;
    printf("%d\n",a);
    a =!a;
    printf("%d\n",a);
    a=!a;
    printf("%d\n",a);
}