#include<stdio.h>
#include<math.h>
void delete(int *n, int a[], int k){
    if(k<0 || k>(*n)-1) return;
    for(int i=k; i<(*n)-1; i++){
        a[i]=a[i+1];
    }
    (*n)-=1;
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    int a[10001];
    delete(&n, a, k);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}