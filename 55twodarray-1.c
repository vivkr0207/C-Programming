#include<stdio.h>
int main(){
    int s[2][3]={{45,56,67},{54,65,76}};
    printf("Array wise traversing\n");
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    printf("Elements wise traversing\n");
    for(int j=0;j<3;j++){
        for(int i=0;i<2;i++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
