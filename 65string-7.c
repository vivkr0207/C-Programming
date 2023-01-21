#include<stdio.h>
int main(){
    char word1[20]="",word2[20];
    printf("Enter two words\n");
    scanf("%s%s",word1,word2);
    printf("Words before concatenation\nFirst word = %s\nSecond word = %s\n",word1,word2);
    int l=0;
    for(int i=0;word1[i]!='\0';i++){
        l++;
    }
    for(int i=l,j=0;word2[j]!='\0';i++,j++){
        word1[i]=word2[j];
    }
    printf("Words after concatenation\nFirst word: %s\nSecond word: %s\n",word1,word2);
    return 0;
}
