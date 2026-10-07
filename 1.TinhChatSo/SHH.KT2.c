/*Nếu p là SNT và 2^p-1 
cũng là SNT thì (2^p-1)*(2^(p-1)) là SHH
*/
#include<stdio.h>
#include<math.h>
typedef long long ll;
int snt(ll n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int hh(ll n){
    ll num;
    for(int p=2; p<=32; p++){
        if(snt(p)==1&&snt(pow(2, p)-1)==1){
            num=(pow(2, p)-1)*pow(2, (p-1));
            if(num==n){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    ll n;
    scanf("%lld", &n);
    if(hh(n)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
