#include<stdio.h>

int partition(int a[], int l, int r){
    int pivot=a[l], i=l, j=r;
    while(1){
        while(a[i]<pivot){
            i+=1;
        }
        while(a[j]>pivot){
            j-=1;
        }
        if(i<j){
            int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            j-=1;
            l+=1;
        }
        else return j;
    }
}
void quickSort(int a[], int l, int r){
    if(l<r){ 
        int pos=partition(a, l, r);
        quickSort(a, l, pos);
        quickSort(a, pos+1, r);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n-1);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}