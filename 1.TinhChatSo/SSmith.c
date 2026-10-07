/*Nếu N không phải là SNT, có tổng các chữ số của N = tổng
 các chữ số của các thừa số nguyên tố trong phân tích của N.
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
int tongCS(int n){
    int tongCS=0;
    while(n!=0){
        tongCS+=n%10;
        n=n/10;
    }
    return tongCS;
}
int tongTSNT(int n){
    int tongTSNT=0;
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            tongTSNT+=tongCS(i);
            n=n/i;
        }
    }
    if(n!=1){
        tongTSNT+=tongCS(n);
    }
    return tongTSNT;
}
int main(){
    int n;
    scanf("%d", &n);
    if((snt(n)==0)&&(tongTSNT(n)==tongCS(n))){
        printf("YES");
    }
    else{
        printf("NO");
    }
}