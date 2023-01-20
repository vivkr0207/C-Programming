#include<stdio.h>
int main(){
    char word[10],word2[10]="";
    int i;
    printf("Enter a word\n");
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++){
        word2[i]=word[i];
    }
    printf("Original word = %s\nCopied word = %s",word,word2);
    return 0;
}