#include<stdio.h>
#include<math.h>
int b[10000001];
void countingSort(int a[], int n){
    int max=-1e9;
    for(int i=0; i<n; i++){
        max=fmax(max, a[i]);
    }
    for(int i=0; i<n; i++){
        b[a[i]]++;
    }
    for(int i=0; i<=max; i++){
        for(int j=1; j<=b[i]; j++){
            printf("%d ", i);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    countingSort(a, n);
}