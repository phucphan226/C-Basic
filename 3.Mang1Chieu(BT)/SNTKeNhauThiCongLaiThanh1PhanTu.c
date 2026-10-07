#include<stdio.h>
#include<math.h>
int snt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int reduceArray(int a[], int n){
    int i=0, so=0;
    while(i<n){
        if(snt(a[i])==1){
            so+=1;
        }
        int dem=0, tong=a[i], j=i;
        while(snt(a[j])==1&&snt(a[j+1])==1&&(j+1)<n){
            dem+=1;
            tong+=a[j+1];
            j++;
        }
        for(int h=j+1; h<n; h++){
            a[h-dem]=a[h];
        }
        a[i]=tong;
        n=n-dem;
        i++;
    }
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return so;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("%d", reduceArray(a, n));    
    return 0;
}