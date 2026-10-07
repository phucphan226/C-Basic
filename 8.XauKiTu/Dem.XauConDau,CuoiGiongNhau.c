#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cnt[256];
int main(){
    char c[100001];
    gets(c);
    for(int i=0; i<strlen(c); i++){
        cnt[c[i]]++;
    }
    long long tong=strlen(c);
    for(int i=0; i<256; i++){
        if(cnt[i]){
            tong+=1ll*(cnt[i]-1)*(cnt[i])/2;
        }
    }
    printf("%lld", tong);
    return 0;
}