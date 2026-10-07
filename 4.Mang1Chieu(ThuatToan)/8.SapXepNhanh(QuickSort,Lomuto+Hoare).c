#include<stdio.h>
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void printSubArray(int a[], int left, int right){
    for(int i = left; i<= right; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
int partition(int a[], int left, int right){
    int pivotIndex = right;
    int pivotValue = a[pivotIndex];
    right--;        
    while(left<right){
        while(a[left] < pivotValue){
            left++;
        }
        while(a[right] > pivotValue){
            right--;
        }
        if(left >= right)
            break;
        swap(&a[left], &a[right]);
    }
    swap(&a[left], &a[pivotIndex]);
    return left; 
}

void printArray(int a[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void quickSort(int a[], int left, int right){
    if(left>=right) return;
    int p = partition(a, left, right);
    printSubArray(a, left, right);
    
    quickSort(a, left, p-1);
    quickSort(a, p+1, right);
    
}
int main(){
    int a[] = {3, 1, 2, -4, 5, 10, 6, -4, 11, 9, -2};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    printf("\nMang sau khi sap xep:\n");
    printArray(a,n);
    return 0;
}