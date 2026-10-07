#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
cnt[1000];
int main(){
    char c[10000];
    gets(c);
    char a[1000][100];
    char b[1000][100];
    int n=0;
    int m=0;
    char *xau=strtok(c, " ");
    while(xau!=NULL){
        strcpy(b[m], xau);
        m++;
        int check=1;
        for(int i=0; i<n; i++){
            if(strcmp(a[i], xau)==0){
                check=0;
                break;
            }
        }
        if(check==1){
            strcpy(a[n], xau);
            n++;
        }
        xau=strtok(NULL, " ");
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(strcmp(a[i], b[j])==0){
                cnt[i]++;
            }
        }
    }
    int max=-1e9, min=1e9;
    int icheck=-1, icheck1=-1;
    for(int i=0; i<n; i++){
        if(cnt[i]>max){
            max=cnt[i];
            icheck=i;
        }
        if(cnt[i]<min){
            min=cnt[i];
            icheck1=i;
        }
    }
    printf("%s %d\n%s %d", a[icheck], max, a[icheck1], min);
    return 0;
}