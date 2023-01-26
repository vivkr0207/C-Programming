#include<stdio.h>
#include<string.h>
int main(){
    char word1[10],word2[10];
    printf("Enter a word\n");
    scanf("%s",word1);
    strcpy(word2,word1);
    printf("First word: %s\nSecond word: %s",word1,word2);
    return 0;
}