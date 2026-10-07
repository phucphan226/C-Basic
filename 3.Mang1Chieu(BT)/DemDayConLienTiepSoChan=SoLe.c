#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int tong=0;
    for(int i=0; i<n; i++){
        int tchan=0; 
        int tle=0;
        if(a[i]%2==0){
            tchan+=1;
        }
        else{
            tle+=1;
        }
        for(int j=i+1; j<n; j++){
            if(a[j]%2==0){
                tchan+=1;
            }
            else{
                tle+=1;
            }
            if(tchan==tle){
                tong+=1;
            }
        }
    }
    printf("%d", tong);
}
