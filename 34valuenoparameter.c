#include<stdio.h>
int add(){
    int n1,n2,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    return s;
}
main(){
    int s=add();
    printf("Addition = %d",s);
}