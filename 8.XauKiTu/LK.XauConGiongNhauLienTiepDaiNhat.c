#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char c[100001];
    gets(c);
    int max=-1e9;
    int ascii=0;
    int jcheck=0;
    int icheck=0;
    for(int i=0; i<strlen(c); i++){
        int j=i+1;
        int dem=1;
        while(c[i]==c[j]&&j<strlen(c)){
            dem++;
            j++;
        }
        if(dem>=max&&c[i]>=c[icheck]){
            max=dem;
            jcheck=j-1;
            icheck=i;
        }
    }
    for(int i=icheck; i<=jcheck; i++){
        printf("%c", c[i]);
    }
}