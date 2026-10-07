#include<stdio.h>
#include<math.h>
int prime[1000000];
int max=-1e9;
void sang(int max){
    for(int i=0; i<=max; i++){
        prime[i]=1;
    }
    prime[1]=prime[0]=0;
    for(int i=2; i<=sqrt(max); i++){
        if(prime[i]==1){
            for(int j=i*i; j<=max; j+=i){
                prime[j]=0;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        max=fmax(max, a[i]);
    }
    sang(max);
    int kl=0;
    int i=0; 
    int check=0;
    int icheck=-1;
    int tongmax=0;
    while(i<n){
        if(prime[a[i]]==0){
            i++;
        }
        else{
            check=1;
            int dem=1;
            int tong=a[i];
            while((i+1)<n&&prime[a[i+1]]==1){
                dem++;
                tong+=a[i+1];
                i++;
            }
            if(dem>kl){
                kl=dem;
                icheck=i;
                tongmax=tong;
            }
            else if(dem==kl){
                if(tong>tongmax){
                    tongmax=tong;
                    icheck=i;
                }
            }
            i++;
        }
    }
    if(icheck==n-2&&prime[a[icheck+1]]==1){
        kl++;
        icheck++;
        tongmax+=a[icheck+1];
    }
    if(check==0){
        printf("NOT FOUND");
    }
    else{
        printf("%d\n", kl);
        for(int i=icheck-kl+1 ; i<=icheck; i++){
            printf("%d ", a[i]);
        }
    }
    return 0;
}