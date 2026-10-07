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
int strcmp(char s[], char t[]){
    int n=len(s), m=len(t);
    if(n==m){
        for(int i=0; i<n; i++){
            if(s[i]<t[i]) return -1;
            else if(s[i]>t[i]) return 1;
        }
        return 0;
    }
    else{
        for(int i=0; i<(n<m?n:m); i++){
            if(s[i]<t[i]) return -1;
            else if(s[i]>t[i]) return 1; 
        }
        return n<m?-1:1;
    }
}
int main(){
    
    return 0;
}