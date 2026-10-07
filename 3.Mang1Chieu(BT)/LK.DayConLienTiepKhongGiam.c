#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int i=0;
    int dem=1;
    while(i+1<n){
        printf("Day con thu %d: ", dem);
        while(a[i]<=a[i+1]&&(i+1)<n){
            printf("%d ", a[i]);
            i++;
        }
        if(a[i]>=a[i-1]){
            printf("%d ", a[i]);
            i++;
        }
        printf("\n");
        dem++;
    }
    if(a[n-1]<a[n-2]){
        printf("Day con thu %d: %d",dem, a[n-1]);
    }
    return 0;
}