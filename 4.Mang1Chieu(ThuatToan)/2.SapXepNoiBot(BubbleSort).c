#include<stdio.h>
void bubbleSort(int a[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j]>=a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
}

def bubbleSort(a, n):
    for i in range(0, n-1):
        for j in range(0, n-i-1):
            if(a[j]>=a[j+1]):
            a[j], a[j+1]=a[j+1], a[j]


int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}