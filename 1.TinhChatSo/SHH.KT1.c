/*
tổng các ước nguyên dương(-nó)=nó.
*/
#include <stdio.h>
#include<math.h>
long long hh(long long n)
{
    long long tong=1;
    for(long long i=2; i<=sqrt(n); i++){
    if(n%i==0){
    tong+= n/i+i;
    if(i*i==n){
        tong=tong-i;
    }
    }
}
    return tong;
}
int main(){
    long long n;
    scanf("%lld", &n);
   if(hh(n)==n){
       printf("YES");
   }
   else{
       printf("NO");
   }
}



