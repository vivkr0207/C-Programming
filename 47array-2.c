#include<stdio.h>
int main(){
    int m[3],i;
    printf("Enter marks of three subjects\n");
    for(i=0;i<=2;i++){
        scanf("%d",&m[i]);
    }
    printf("Marks of all subjects are\n");
    for(i=0;i<=2;i++){
        printf("%d\t",m[i]);
    }
    return 0;
}