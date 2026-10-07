/*
Số nguyên chẵn lớn hơn 2 có thể 
được biểu diễn tổng của 2 SNT.
 */
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
int check(int n){
    for(int i=2; i<=n/2; i++){
        int j=n-i;
        if(snt(j)==1&&snt(i)==1){
            printf("%d %d\n", i, j);
        }
    }
}
int main(){
    int t, n;
    scanf("%d", &t);
    for(int i=1; i<=t; i++){
        scanf("\n%d", &n);
        check(n);
    }
}
