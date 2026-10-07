#include<stdio.h>
cnt[1000000];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int max=-1e9;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        max=fmax(max, a[i]);
        cnt[a[i]]++;
    }
    int dem=0;
    for(int i=0; i<=max; i++){
        if(cnt[i]!=0){
            dem+=(cnt[i])/2*(cnt[i]-1);
        }
    }
    printf("%d", dem);
    return 0;
}