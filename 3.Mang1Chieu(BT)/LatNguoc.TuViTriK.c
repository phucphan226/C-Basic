#include<stdio.h>
#include<math.h>
void dao(int *arr, int lenArr, int k){
    for(int i=k; i<(lenArr-k)/2+k; i++){
        int tmp=arr[i];
        arr[i]=arr[lenArr-1-i+k];
        arr[lenArr-1-i+k]=tmp;
    }
}
int main(){
    int lenArr, k;
    scanf("%d%d", &lenArr, &k);
    int arr[lenArr];
    for(int i=0; i<lenArr; i++){
        scanf("%d", &arr[i]);
    }
    dao(arr, lenArr, k);
    for(int i=0; i<lenArr; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}