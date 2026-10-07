#include<stdio.h>
#include<math.h>
int check[100000];
int demDayDongTri(int a[], int n){
    int tong=0;
    int i=0;
    while(i+1<n){
        int dem=1;
        while(a[i]==a[i+1]&&(i+1)<n){
            dem+=1;
            i++;
        }
        if(dem>=2){
            tong+=1;
        }
        i++;
    }
    return tong;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        check[i]=0;
        scanf("%d", &a[i]);
    }
    printf("So day con dong tri la: %d", demDayDongTri(a, n));
}