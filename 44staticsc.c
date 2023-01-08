#include<stdio.h>
void display(){
    static int i=1;
    printf("%d\n",i);
    i++;
}
int main(){
    display();
    display();
    display();
    return 0;
}