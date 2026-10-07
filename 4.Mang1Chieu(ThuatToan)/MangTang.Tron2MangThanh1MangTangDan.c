#include<stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n], b[m];
    int c[n+m];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
    }
    int i=0, j=0;
    int h=0;
    while(i<n&&j<m){
        if(a[i]>=b[j]){
            c[h]=b[j];
            h++;
            j++;
        }
        else{
            c[h]=a[i];
            h++;
            i++;
        }
    }
    while(i<n){
        c[h]=a[i];
        h++;
        i++;
    }
    while(j<m){
        c[h]=b[j];
        h++;
        j++;
    }
    for(int i=0; i<h; i++){
        printf("%d ", c[i]);
    }
}