#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct word{
    char tu[1000];
    int sl;
};
typedef struct word wo;
wo a[1000];
int m=0;
int cmp(const void *a, const void *b){
    wo *x=(wo*)a;
    wo *y=(wo*)b;
    return strcmp(x->tu, y->tu);
}
int main(){
    char s[1000];
    while(gets(s)!=NULL){
        char *xau=strtok(s, " ");
        while(xau!=NULL){
           int check=1;
            for(int i=0; i<m; i++){
                if(strcmp(xau, a[i].tu)==0){
                    check=0;
                    a[i].sl++;
                    break;
                }
            }
            if(check==1){
                strcpy(a[m].tu, xau);
                a[m].sl=1;
                m++;
            } 
            xau=strtok(NULL, " ");
        }
    }
    qsort(a, m, sizeof(a[0]), cmp);
    int max=-1e9;
    for(int i=0; i<m; i++){
        max=fmax(max, a[i].sl);
    }
    for(int i=0; i<m; i++){
        if(max==a[i].sl){
            printf("%s %d", a[i].tu, a[i].sl);
            break;
        }
    }
    return 0;
}