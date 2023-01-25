#include<stdio.h>
#include<string.h>
int main(){
    char word[10];
    printf("Enter a word\n");
    scanf("%s",word);
    int i=strlen(word);
    printf("Length = %d",i);
    return 0;
}