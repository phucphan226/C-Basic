#include<stdio.h>
#include<math.h>
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    long long sum=0;
    int icheck;
    for(int i=0; i<k; i++){
        sum+=a[i];
        icheck=0;
    }
    long long max=sum;
    for(int i=1; i<=n-k; i++){
        sum=sum-a[i-1]+a[i+k-1];
        printf("%lld ", sum);
        if(sum>max){
            max=sum;
            icheck=i;
        }
    }
    printf("\n%lld\n", max);
    for(int j=icheck; j<icheck+k; j++){
        printf("%d ", a[j]);
    }
}