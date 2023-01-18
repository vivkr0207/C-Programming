#include<stdio.h>
int main(){
    char name[10]={'V','i','v','e','k'};
    int i;
    for(i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
    }
    return 0;
}