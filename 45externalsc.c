#include<stdio.h>
int a=2;
extern int b;
void fun1(){
    printf("%d\t%d\n",a,b);
}
void fun2(){
    printf("%d\t%d\n",a,b);
}
int main(){
    fun1();
    fun2();
    return 0;
}
int b=5;