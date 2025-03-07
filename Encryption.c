#include<stdio.h>
#include<string.h>
#include<ctype.h>

int encryption(char *text, char *key);
int main(void) {
    char option[3];
    char key[28];
    char key1[] = "NQXPOMAFTRHLZGECYJIUWSKDVB";
    char text[101];
    
    printf("Want to enter your Encription code? if yes press y else n \n ");
    scanf("%s",&option);
    if( strcmp(option,"y")==0 || strcmp(option,"Y")==0 ) {
        printf("Enter Encryption Key :");
        scanf("%27s", &key);
       }
    }else{
        strcpy(key, key1);
    }
        printf("Enter Encryption text :");
        scanf("%100s", &text);
        encryption(text,key);
    
}
int encryption(char *text, char *key){
    // code= index[3= a to c], 
    for (int i =0; text[i] != '\0' ; i++){
        char upper = toupper(text[i]);
        printf("%c",key[(upper-'A')]);
    }
}
