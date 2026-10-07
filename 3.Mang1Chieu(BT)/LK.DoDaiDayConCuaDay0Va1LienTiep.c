#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int i=0;
    while(i<n){
        if(a[i]==0){
            i++;
        }
        else{
            int dem=1;
            while(a[i+1]==a[i]&&(i+1)<n){
                dem++;
                i++;
            }
            printf("%d ", dem);
            i++;
        }
    }
    printf("\n");
    int j=0;
    while(j<n){
        if(a[j]==1){
            j++;
        }
        else{
            int dem=1;
            while(a[j+1]==a[j]&&(j+1)<n){
                dem++;
                j++;
            }
            printf("%d ", dem);
            j++;
        }
    }
    return 0;
}