#include<stdio.h>
int main(){
    int s[3][4],i,j,m;
    for(i=0;i<=2;i++){
        s[i][3]=0;
        printf("Input details of student %d\n",i+1);
        for(j=0;j<=2;j++){
            printf("Enter marks of subject %d\n",j+1);
            scanf("%d",&s[i][j]);
            s[i][3]+=s[i][j];
        }
    }
    printf("Sub1\tSub2\tSub3\tTotal\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<4;j++){
        m=s[0][j];
        for(i=1;i<3;i++){
            if(s[i][j]>m){
                m=s[i][j];
            }
        }
        if(j<=2){
            printf("Highest in subject %d = %d\n",j+1,m);
        }
        else{
            printf("Highest total = %d\n",m);
        }
    }
    return 0;
}