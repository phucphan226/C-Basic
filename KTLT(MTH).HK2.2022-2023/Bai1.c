#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    long long sum=0;
    char s[10000];
    gets(s);
    char *xau=strtok(s, "+ ");
    while(xau!=NULL){
        long long so=0, mu=xau[strlen(xau)-1]-'0';
        for(int i=0; i<strlen(xau)-1; i++){
            so=so*10+xau[i]-'0';
        }
        sum+=pow(so, mu);
        xau=strtok(NULL, "+ ");
    }
    printf("%lld", sum);
    return 0;
}