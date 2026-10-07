#include<stdio.h>
#include<math.h>
void ln(int a[], int n){
    int l=0; 
    int r=n-1;
    while(l<=r){
        int c=a[l];
        a[l]=a[r];
        a[r]=c;
        l++;
        r--;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    ln(a, n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
