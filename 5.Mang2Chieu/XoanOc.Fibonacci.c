#include<stdio.h>
long long fibo(int n){
    long long f1=0, f2=1, fn;
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    else{
        for(int i=3; i<=n; i++){
            fn=f1+f2;
            f1=f2;
            f2=fn;
        }
        return fn;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    long long a[n][n];
    int dem=1;
    int c1, h1, c2, h2;
    c1=h1=0;
    c2=h2=n-1;
    while(dem<=n*n){
        for(int i=c1; i<=c2; i++){
            a[h1][i]=fibo(dem);
            dem++;
        }
        h1++;
        for(int i=h1; i<=h2; i++){
            a[i][c2]=fibo(dem);
            dem++;
        }
        c2--;
        for(int i=c2; i>=c1; i--){
            a[h2][i]=fibo(dem);
            dem++;
        }
        h2--;
        for(int i=h2; i>=h1; i--){
            a[i][c1]=fibo(dem);
            dem++;
        }
        c1++;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
}