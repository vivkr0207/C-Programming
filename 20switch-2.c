#include<stdio.h>
main(){
    int n1,n2,r,ch;
    printf("Enter 1 to add two numbers\n");
    printf("Enter 2 to subtract two numbers\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Enter two numbers\n");
        scanf("%d%d",&n1,&n2);
        r=n1+n2;
        printf("Addition = %d\n",r);
        break;

        case 2:
        printf("Enter two numbers\n");
        scanf("%d%d",&n1,&n2);
        r=n1-n2;
        printf("Difference = %d\n",r);
        break;
    }
}