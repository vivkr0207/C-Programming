#include<stdio.h>
int main(){
    auto int a=2,b;
    printf("%d %d\n",a,b);
    {
        auto int a=5,b=6;
        printf("%d %d\n",a,b);
    }
    printf("%d %d\n",a,b);
    return 0;
}