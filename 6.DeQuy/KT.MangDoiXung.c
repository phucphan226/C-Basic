#include<stdio.h>
int dx(int a[], int l, int r){
    if(l>=r){
        return 1;
    }
    else{
        if(a[l]!=a[r]){
            return 0;
        }
        else{
            dx(a, l+1, r-1);
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
    if(dx(a, 0, n-1)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}