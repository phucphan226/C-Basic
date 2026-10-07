#include<stdio.h>
#include<math.h>
long long gt(int n){
    long long gt=1;
    for(int i=1; i<=n; i++){
        gt*=i;
    }
    return gt;
}
float th(int n, int k){
    float th=gt(n)/(gt(k)*gt(n-k));
    return th;
    }
float th1(int n, int k){   long long tu=1;
    for(int i=1; i<=k; i++){
        tu*=(n-i+1);
    }
    float th1= tu/gt(k);
    return th1;
}

int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    while(n<k){
       printf("Khong thoa man, nhap lai.\n");
       printf("Lan luot nhap n, k:\n");
       scanf("%d%d", &n, &k);
    }
  printf("%.2f", th1(n, k));
}
