#include<stdio.h>
int main(){
    int s[2][2][3]={{{45,56,67},{54,65,76}},{{55,44,66},{44,33,55}}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("%d\t",s[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}