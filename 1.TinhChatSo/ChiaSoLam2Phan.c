#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int dcs(int n){
    int dem=0;
    while(n!=0){
        dem++;
        n/=10;
    }
    return dem;
}
int snt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int check(int n){
    if(dcs(n)%2==0){
        int a=n/(int)pow(10, dcs(n)/2);
        int b=n%(int)pow(10, dcs(n)/2);
        if(snt(a+b)==1){
            return 1;
        }
    }
    else{
        int a=n/(int)pow(10, dcs(n)/2+1);
        int b=n%(int)pow(10, dcs(n)/2);
        if(snt(a+b)==1){
            return 1;
        }
    }
    return 0;
}
int main(){
    int k;
    scanf("%d", &k);
    for(int i=1; i<k; i++){
        if(check(i)==1){
            printf("%d ", i);
        }
    }
    return 0;
}