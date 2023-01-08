#include<stdio.h>
#include"arithmetic.h"
int main(){
    int n1,n2,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    s=add(n1,n2);
    printf("Addition = %d",s);
    return 0;
}