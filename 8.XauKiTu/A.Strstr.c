#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int len(char s[1001]){
    int kq=0;
    while(s[kq]!='\0'){
        kq+=1;
    }
    return kq;
}
int str(char s[], char t[]){
    int n=len(s), m=len(t);
    for(int i=0; i<=n-m; i++){
        int check=1;
        for(int j=0; j<m; j++){
            if(s[i+j]!=t[j]){
                check=0;
                break;
            }
        }
        if(check==1) return i;
    }
    return -1;
}
int main(){
    
    return 0;
}