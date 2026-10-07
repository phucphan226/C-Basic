#include<stdio.h>
int b[1000001];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int max1=-1e9;
    for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    b[a[i]]++;
    max1=fmax(max1, a[i]);
    }
    int max2=-1e9;
    int huyen;
    for(int i=0; i<n; i++){
        if(b[a[i]]>max2){
            max2=b[a[i]];
            huyen=a[i];
        }
    }
    printf("%d %d", huyen, max2);
}