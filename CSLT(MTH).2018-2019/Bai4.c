#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void inputStates(char states[][80], int n){
    for(int i=0; i<n; i++){
        scanf("%s", &states[i]);
    }
}
void inputAbbreviation(char abbr[][3], int n){
    for(int i=0; i<n; i++){
        scanf("%s", &abbr[i]);
    }
}
void lookup(char s[], char abbr[][3], char states[][80], int n){
    int check=0;
    for(int i=0; i<n; i++){
        if(strcmp(s, abbr[i])==0){
            check=1;
            printf("%s", states[i]);
        }
    }
    if(check==0){
        printf("NULL");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    char states[1000][80];
    inputStates(states, n);
    char abbr[1000][3];
    inputAbbreviation(abbr, n);
    char s[1000];
    scanf("%s", &s);
    lookup(s, abbr, states, n);
}