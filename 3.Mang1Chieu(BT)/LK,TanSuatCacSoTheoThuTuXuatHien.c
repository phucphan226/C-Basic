#include<stdio.h>
#include<math.h>
int duong[1000000];
int am[1000000];
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]>=0){
            duong[a[i]]++;
        }
        else{
            am[-a[i]]++;
        }
   }
    for(int i=0; i<n; i++){
        if(am[-a[i]]!=0||duong[a[i]]!=0){
            if(a[i]>=0){
                printf("%d %d\n", a[i], duong[a[i]]);
                duong[a[i]]=0;
            }
            else{
                printf("%d %d\n", a[i], am[-a[i]]);
                am[-a[i]]=0;
            }
        }
    }
   return 0;
}