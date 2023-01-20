#include<stdio.h>
int main(){
    char word[10];
    printf("Enter a word\n");
    scanf("%s",word);
    int l=0;
    for(int i=0;word[i]!='\0';i++){
        l++;
    }
    printf("Length = %d",l);
    return 0;
}