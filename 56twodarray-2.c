#include<stdio.h>
int main(){
    int s[2][3];
    for(int i=0;i<=1;i++){
        printf("\nInput details of the students\n",i+1);
        for(int j=0;j<=2;j++){
            printf("Enter marks of subject %d\n",j+1);
            scanf("%d",&s[i][j]);
        }
    }
    printf("Sub1\tSub2\tSub3\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}