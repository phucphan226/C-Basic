#include<stdio.h>
#include<math.h>
void pt(int n){
    int icheck;
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            n=n/i;
            icheck=i;
        }
    }
    if(n!=1){
        icheck=n;
    }
    printf("%d\n", icheck);
}
int main(){
    int n;
    int t;
    scanf("%d\n", &t);
    for(int i=1; i<=t; i++){
        scanf("%d\n", &n);
        pt(n);
    }
    return 0;
}