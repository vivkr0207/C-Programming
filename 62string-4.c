#include<stdio.h>
int main(){
    char name[30];
    printf("Enter your full name\n");
    scanf("%[^\n]s",&name);
    printf("Your full name is %s",name);
    return 0;
}