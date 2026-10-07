#include<stdio.h>
#include<math.h>
void nhapVecto(int n, int a[], int b[]){
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int j=0; j<n; j++){
        scanf("%d", &b[j]);
    }
}
int tichVoHuong(int n, int a[], int b[]){
    int tvh=0;
    for(int i=0; i<n; i++){
        tvh+=a[i]*b[i];
    }
    return tvh;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    nhapVecto(n, a, b);
    printf("%d", tichVoHuong(n, a, b));
}