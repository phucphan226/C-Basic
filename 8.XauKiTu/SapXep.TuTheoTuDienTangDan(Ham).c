#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void tangdan(char a[][100], int i){
    for(int j=0; j<i; j++){
        for(int h=j+1; h<i; h++){
            if(strcmp(a[h], a[j])<=0){
                char c[10000];
                strcpy(c, a[h]);
                strcpy(a[h], a[j]);
                strcpy(a[j], c);
            }
        }
    }
}
int main(){
    char c[10000];
    gets(c);
    char a[100][100];
    char *word=strtok(c, " ");
    int i=0;
    while(word!=NULL){
        strcpy(a[i], word);
        i++;
        word=strtok(NULL, " ");
    }
    tangdan(a, i);
    for(int j=0; j<i; j++){
        printf("%s ", a[j]);
    }
}