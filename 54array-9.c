#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers you want to store\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers\n",n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("Array before sorting \n");
    for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Array after sorting \n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}