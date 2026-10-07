#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int hoa(char c[]){
    for(int i=0; i<strlen(c); i++){
        if(islower(c[i])){
            return 0;
        }
    }
    return 1;
}
int main(){
    char c[1000];
    gets(c);
    int dem=0;
    char *word=strtok(c, " ");
    while(word!=NULL){
        if(hoa(word)){
            dem+=1;
        }
        word=strtok(NULL, " ");
    }  
    printf("%d", dem);
}