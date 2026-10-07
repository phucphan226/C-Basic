//La 2 day con cung so phan tu, tru nhau chia het cho k
#include<stdio.h>
int coDayConTuongDuong(int a[], int n, int k){
    for(int i=2; i<=n/2; i++){
        for(int j=0; j<=n-i; j++){
            int tong=0;
            for(int h=j; h<i+j-1; h++){
                tong+=a[h];
            }
            int tong1=tong;
            for(int t=j+1; t<=n-i; t++){
                for(int v=t; v<t+i; v++){
                    tong=tong-a[v-1]+a[v-1+i];
                }
                if((tong-tong1)%k==0){
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", coDayConTuongDuong(a, n, k));
}