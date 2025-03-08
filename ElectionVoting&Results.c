#include<stdio.h>
#include<string.h>
#include<ctype.h>

typedef struct {
    char name[40];
    int vote;
} candidates;

int winner (candidates candidate[], int candidateno);

int main( int argc, char *argv[]){
    // take candidate name
    int candidateno = argc-1;
    candidates candidate[candidateno]; //declare structure
    
    for ( int i = 0; i < candidateno; i++) {
        strcpy(candidate[i].name,argv[i+1]);
    
        for(int k=0; candidate[i].name[k] != '\0'; k++){
           candidate[i].name[k] = tolower(candidate[i].name[k]); 
        }
        candidate[i].vote = 0;
        //printf(candidate[i].name);
    }
    int voters;
    printf("Enter No. of voters: ");
    scanf("%d", &voters);
    for ( int i =0; i < voters; i++){
        char cand[40];
        printf("\n Vote %i :",i+1);
        scanf("%40s",cand);
        char input[40];
        strcpy(input, cand);
        for(int k=0; input[k] != '\0'; k++){
            input[k] = tolower(input[k]);
        }
        for(int j =0; j< candidateno; j++){
            
                if(strcmp(input, candidate[j].name)==0){
                candidate[j].vote ++;
            }
            
            } 
         if(strcmp(input, candidate[i].name)==1) { printf("Invaide vote name %20s",input); }
        }
    
    winner(candidate,candidateno);
}
int winner (candidates candidate[], int candidateno){
    //max vote between all
    int maxvote=0;
    for(int i = 0; i < candidateno; i++){
        if(candidate[i].vote > maxvote){
            maxvote = candidate[i].vote;
        }
    }
    for( int i =0; i <candidateno; i++){
        if(candidate[i].vote == maxvote){
            return printf("Winner : %s",candidate[i].name);
        }
    }
}




