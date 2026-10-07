#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int cmp(const void *a, const void *b){
    char *x=(char*)a;
    char *y=(char*)b;
    return strcmp(y, x);
}
int main(){
    char c[100000];
    gets(c);
    char a[1000][100];
    int n=0;
    int max=-1e9, icheck=-1;
    for(int i=1; i<strlen(c); i++){
        int cnt=1;
        int j=i;
        while(c[j]!=c[j-1]&&j<strlen(c)){
            cnt++;
            j++;
        }
        if(cnt>max){
            max=cnt;
            icheck=i;
        }
    }
    for(int i=1; i<strlen(c); i++){
        int cnt=1;
        int j=i;
        while(c[j]!=c[j-1]&&j<strlen(c)){
            cnt++;
            j++;
        }
        if(cnt==max){
            char s[1000];
            int m=0;
            for(int h=i-1; h<i-1+cnt; h++){
                s[m]=c[h];
                m++;
            }
            strcpy(a[n], s);
            n++;
        }
    }
    qsort(a, n, sizeof(a[0]), cmp);
    printf("%s", a[0]);
    return 0;
}