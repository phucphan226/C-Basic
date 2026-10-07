#include<stdio.h>
#include<math.h>
int check(int a[], int n){
    int l=0, r=n-1;
    while(l<=r){
        if(a[l]!=a[r]){
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
    int main(){
    int n;
    scanf("%d", &n);
    int a[n], p;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(check(a, n)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
