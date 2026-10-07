#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    int m, s;
    scanf("%d%d", &m, &s);
    int s1=s;
    if((s<1&&m>=2)||s>9*m){
        printf("NOT FOUND");
    }
    else{
        int to[m], be[m];
        s1=s1-1;
        for(int i=m-1; i>0; i--){
            if(s1>=9){
                be[i]=9;
                s1-=9;
            }
            else{
                be[i]=s1;
                s1=0;
            }
        }
        be[0]=s1+1;
        for(int i=0; i<m; i++){
            printf("%d", be[i]);
        }
        printf("\n");
        for(int i=0; i<m; i++){
            if(s>=9){
                to[i]=9;
                s-=9;
            }
            else{
                to[i]=s;
                s=0;
            }
        }
        for(int i=0; i<m; i++){
            printf("%d", to[i]);
        }         
    }
}