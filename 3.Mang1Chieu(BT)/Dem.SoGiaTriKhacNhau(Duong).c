#include<stdio.h>
#include<math.h>
int dem[1000001];
int main(){
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        dem[a[i]]=1;
    }
    int tong=0;
    for(int i=0; i<1000001; i++){
        if(dem[i]==1){
            tong+=1;
        }
    }
    printf("%d", tong);
}