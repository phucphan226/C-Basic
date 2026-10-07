#include<stdio.h>
#include<math.h>
int b[1000001];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int max=-1e9;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[a[i]]++;
        max=fmax(max, a[i]);
    }
    for(int i=0; i<=max; i++){
        if(b[i]!=0){
            printf("%d %d\n", i, b[i]);
        }
    }
}