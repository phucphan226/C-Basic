#include<stdio.h>
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int dem=0;
    for(int i=1; i<=n; i++){
        int tong=0;
        for(int j=0; j<i; j++){
            tong+=a[j];
        }
        if(tong==k){
            dem++;
        }
        for(int h=1; h<=n-i; h++){
            tong=tong-a[h-1]+a[h+i-1];
            if(tong==k){
                dem++;
            }
        }
    }
    printf("%d", dem);
    return 0;
}