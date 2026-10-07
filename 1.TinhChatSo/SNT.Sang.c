#include<stdio.h>
#include<math.h>
int prime[10000001];
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
}
int main(){
    int n;
    scanf("%d", &n);
    sang(n);
    for(int i=0; i<=n; i++){
        if(prime[i]==1){
            printf("%d ", i);
        }
    }
}