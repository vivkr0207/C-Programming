#include<stdio.h>
int add(int n1,int n2){
    int s=n1+n2;
    return s;
}
main(){
    int n1,n2,s;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    s=add(n1,n2);
    printf("Addition =%d",s);
}