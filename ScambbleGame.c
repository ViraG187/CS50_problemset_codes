#include<stdio.h>
#include<string.h>
#include<ctype.h>

int winner(char *word1, char *word2);

int main(void){
    char word1[99];
    char word2[99];
    printf("Enter word \n Player 1 :");
    scanf("%99s",word1);
    printf("Enter word \n Player 2 :");
    scanf("%99s",word2);
    
    winner(word1,word2);
}
int winner(char *word1, char *word2){
    int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    //code c=3-- point[3] 
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int score1 =0;
    int score2 =0;
    for(int i= 0; i < len1; i++){
         if (isupper(word1[i])) {
            score1 += points[word1[i]-'A'];
        }else {
            score1 += points[word1[i]-'a'];
        }
    } //return score1;   
    for(int i=0; i < len2; i++){
            if (isupper(word2[i])){
            score2 += points[word2[i]-'A'];
        }else {
            score2 += points[word2[i]-'a'];
        }
    }
    if( score1 > score2){
        return printf("Player 1 is Winner!!\n");
    }else if(score1 = score2){ printf("Tie@"); }
    else{ return printf("Player 2 is Winner!!\n");}   
}
