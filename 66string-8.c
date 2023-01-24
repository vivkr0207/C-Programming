#include<stdio.h>
int main(){
    int i;
    char word1[10],word2[10];
    printf("Enter two words\n");
    scanf("%s%s",word1,word2);
    for(int i=0;word1[i]!='\0';i++){
        if(word1[i]!=word2[i]){
            break;
        }
    }
    int d=word1[i]-word2[i];
    if(d==0){
        printf("words are equal");
    }
    else{
        printf("words are not equal");
    }
    return 0;
}