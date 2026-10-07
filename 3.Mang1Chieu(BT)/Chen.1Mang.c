#include<stdio.h>
#include<math.h>
int main(){
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    int a[n], b[m];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    for(int i=n-1; i>=p; i--){
        a[i+m]=a[i];
    }
    for(int i=0; i<m; i++){
        a[i+p]=b[i];
    }
    n=n+m;
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}