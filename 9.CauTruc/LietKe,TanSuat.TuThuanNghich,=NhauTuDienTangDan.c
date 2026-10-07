#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
struct word{
    char tu[10000];
    int sl;
};
typedef struct word wo;
wo a[10000];
int n=0;
int tn(char c[]){
    for(int i=0; i<strlen(c)/2; i++){
        if(c[i]!=c[strlen(c)-1-i]){
            return 0;
        }
    }
    return 1;
}
int cmp(const void *a, const void *b){
    wo *x=(wo*)a;
    wo *y=(wo*)b;
    if(x->sl==y->sl){
        return strcmp(x->tu, y->tu);
    }
    else{
        return y->sl-x->sl;
    }
}
int main(){
    char s[10000];
    while(gets(s)!=NULL){
        char *xau=strtok(s, " ");
        while(xau!=NULL){
            if(tn(xau)==1){
                int check=1;
                for(int i=0; i<n; i++){
                    if(strcmp(xau, a[i].tu)==0){
                        check=0;
                        a[i].sl++;
                        break;
                    }
                }
                if(check==1){
                    strcpy(a[n].tu, xau);
                    a[n].sl=1;
                    n++;
                }
            }
            xau=strtok(NULL, " ");
        }
    }
    qsort(a, n, sizeof(a[0]), cmp);
    for(int i=0; i<n; i++){
        printf("%s %d\n", a[i].tu, a[i].sl);
    }
    return 0;
}