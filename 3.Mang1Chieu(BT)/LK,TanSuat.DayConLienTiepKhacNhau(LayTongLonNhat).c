#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int icheck;
    int max=-1e9;
    int tongmax=-1e9;
    for(int i=0; i<n-1; i++){
        int dem=1;
        int tong=a[i];
        while(a[i+1]!=a[i]&&(i+1)<n){
            dem+=1;
            tong+=a[i+1];
            i++;
        }
        if(dem>max){
            max=dem;
            icheck=i;
            tongmax=tong;
        }
        if(dem==max){
            if(tong>tongmax){
                max=dem;
                icheck=i;
                tongmax=tong;
            }
        }
    }
    printf("%d\n", max);
    for(int j=icheck-max+1; j<=icheck; j++){
        printf("%d ", a[j]);
    }
}
