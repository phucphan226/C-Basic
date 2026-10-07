#include<stdio.h>
#include<math.h>
int cnt[10];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]<0){
            a[i]=-a[i];
        }
        if(a[i]==0){
            cnt[0]++;
        }
        while(a[i]>0){
            cnt[a[i]%10]++;
            a[i]/=10;
        }
    }
    for(int i=0; i<10; i++){
        if(cnt[i]!=0){
            printf("%d %d\n", i, cnt[i]);
        }
    }
}
