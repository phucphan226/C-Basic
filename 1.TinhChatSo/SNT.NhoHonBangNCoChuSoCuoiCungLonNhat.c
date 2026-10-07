#include<stdio.h>
#include<math.h>
int prime[10000001];
int check(int n){
    int a=n%10;
    n=n/10;
    while(n!=0){
        if(a<n%10){
            return 0;
        }
        n=n/10;
    }
    return 1;
}
void sang(int n){
    for(int i=0; i<=n; i++){
        prime[i]=1;
    }
    prime[0]=prime[1]=0;
    for(int i=2; i<=sqrt(n); i++){
        if(prime[i]==1){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=0;
            }
        }
    }
    int cnt=0;
    for(int i=0; i<=n; i++){
        if(check(i)==1&&prime[i]==1){
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\n%d", cnt);
}
int main(){
    int n;
    scanf("%d", &n);
    sang(n);
    return 0;
}