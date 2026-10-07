#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct word{
    char nu[10000];
    int sl;
};
typedef struct word wo;
int dk1(char c[]){
    for(int i=0; i<strlen(c); i++){
        if((c[i]-'0')%2!=0){
            return 0;
        }
    }
    return 1;
}
int dk2(char c[]){
    for(int i=0; i<strlen(c)/2; i++){
        if(c[i]!=c[strlen(c)-1-i]){
            return 0;
        }
    }
    return 1;
}
wo a[10000];
int n=0;
int cmp(const void *a, const void *b){
    wo *x=(wo*)a;
    wo *y=(wo*)b;
    return y->sl - x->sl;
}
int main(){
    char s[10000];
    while(gets(s)!=NULL){
        char *xau=strtok(s, " ");
        while(xau!=NULL){
            if(dk1(xau)==1&&dk2(xau)==1){
                int check=1;
                for(int i=0; i<n; i++){
                    if(strcmp(xau, a[i].nu)==0){
                        check=0;
                        a[i].sl++;
                        break;
                    }
                }
                if(check==1){
                    strcpy(a[n].nu, xau);
                    a[n].sl=1;
                    n++;
                }
            }
            xau=strtok(NULL, " ");
        }
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for(int i=0; i<n; i++){
        printf("%s %d\n", a[i].nu, a[i].sl);
    }
    return 0;
}