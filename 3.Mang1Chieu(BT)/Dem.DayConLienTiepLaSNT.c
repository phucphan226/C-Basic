#include<stdio.h>
#include<math.h>
int snt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int tong=0;
    for(int i=0; i<n; i++){
        if(snt(a[i])==1){
            tong+=1;
            for(int j=i+1; j<n; j++){
                if(snt(a[j])==1){
                    tong+=1;
                }
                else{
                    break;
                }
            }
        }
    }
    printf("%d", tong);
}