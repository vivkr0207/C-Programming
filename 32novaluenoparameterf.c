#include<stdio.h>
void add(){
    int n1,n2,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    printf("Addition = %d",s);
}
main(){
    add();
}