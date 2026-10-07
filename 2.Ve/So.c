#include<stdio.h>
#include<math.h>
int main(){
long long n, dem=1;
scanf("%lld\n", &n);
for(long long i=1; i<=n; i++){
        for(long long j=1; j<=n ; j++){
            printf("%lld ",dem);
            dem++;
}
printf("\n");
}
printf("\n");
for(long long i=1; i<=n; i++){
    for(long long j=i; j<=(i+n-1); j++){
        printf("%lld ", j);
    }
    printf("\n");
}
printf("\n");
for(long long i=1; i<=n; i++){
    for(long long j=1; j<=n; j++){
        if(j<=(n-i)){
            printf("~");
        }
        else{
            printf("%lld", i);
        }
    }
    printf("\n");
}
printf("\n");
for(long long i=1; i<=n; i++){
    long long mobat=i;
    long long kc=n-1;
    for(long long j=1; j<=i; j++){
        printf("%lld ", mobat);
        mobat+=kc;
        kc--;
    }
    printf("\n");
}
}
