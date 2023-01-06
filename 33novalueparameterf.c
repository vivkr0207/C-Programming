#include<stdio.h>
void add(int n1,int n2){
    int s=n1+n2;
    printf("addition = %d",s);
}
main(){
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    add(n1,n2);
}