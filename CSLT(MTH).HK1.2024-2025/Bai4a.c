#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int findWrdChr(const char *s, char c, int *pos){
    for(int i=0; i<strlen(s); i++){
        if(s[i]==c){
            *pos=i;
            int dem=0;
            for(int j=i; j<=strlen(s); j++){
                if(s[j]==' ' || s[j]=='\0' || s[j]=='\n'){
                    return dem;
                }
                dem+=1;
            }
        }
    }
    return 0;
}
int main(){
    char s[1000], c;
    int pos=-1;
    gets(s);
    scanf("%c", &c);
    printf("%d\n", findWrdChr(s, c, &pos));
    printf("%d", pos);
    return 0;
}