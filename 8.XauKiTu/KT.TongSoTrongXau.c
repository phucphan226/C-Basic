#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char c[100005];
    scanf("%s", c);
    for(int i=0; i<strlen(c); i++){
        if(isalpha(c[i]))
            c[i]=' ';
    }
    char *token=strtok(c, " ");
    long long ans=0;
    while(token!=NULL){
        ans+=atoll(token);
        token=strtok(NULL, " ");
    }
    printf("%lld", ans);
    return 0;
}