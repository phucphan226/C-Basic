#include<stdio.h>
int dem[1000001];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int max=-1e9;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
         dem[a[i]]++;
         max=fmax(a[i], max);
    }
    int h=-1e9;
    int ih;
    for(int i=0; i<=max; i++){
        if(dem[i]>h){
            h=dem[i];
            ih=i;
        }
    }
    printf("%d %d", ih, h);
}