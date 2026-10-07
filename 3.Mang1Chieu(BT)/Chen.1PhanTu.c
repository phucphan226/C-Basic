#include<stdio.h>
#include<math.h>
void insert(int *n, int a[], int x, int k){
    if(k<0 || k>(*n)) return;
    (*n)+=1;
    for(int i=(*n)-1; i>k; i--){
        a[i]=a[i-1];
    }
    a[k]=x;
}
int main(){
    int n, x, k;
    scanf("%d%d%d", &n, &x, &k);
    int a[10001];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    insert(&n, a, x, k);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}