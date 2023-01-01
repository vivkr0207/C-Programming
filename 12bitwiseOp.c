#include<stdio.h>
main(){
    int a=2, b=3, c;
    c =a&b;
    printf("%d\n",c);
    c= a|b;
    printf("%d\n",c);
    c=a^b;
    printf("%d\n",c);
    c=~a;
    printf("%d\n",c);
    c=a>>1;
    printf("%d\n",c);
    c=a<<1;
    printf("%d\n",c);
}