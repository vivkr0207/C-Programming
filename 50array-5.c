#include<stdio.h>
int main(){
    int m[3],i,t=0;
    float p;
    printf("Enter marks of three subjects\n");
    for(i=0;i<=2;i++){
        scanf("%d",&m[i]);
    }
    for(i=0;i<=2;i++){
        t+=m[i];
    }
    p=(float)t/300*100;
    printf("Total = %d\nPercentage = %.2f",t,p);
    return 0;
}