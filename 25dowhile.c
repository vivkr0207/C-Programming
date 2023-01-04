#include<stdio.h>
main(){
    int n,s,ch;
    do{
        printf("Enter a number\n");
        scanf("%d",&n);
        s=n*n;
        printf("Square of %d = %d\n",n,s);
        printf("Enter 1 to continue\n");
        scanf("%d",&ch);
    }while(ch==1);
}