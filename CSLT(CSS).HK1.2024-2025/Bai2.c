#include<stdio.h>
int findPartitionIndex(int *nums, int size){
    for(int i=1; i<=size-1; i++){
        int tong1=0, tong2=0, jcheck=-1;
        for(int j=0; j<=i-1; j++){
            tong1+=nums[j];
            jcheck=j;
        }
        for(int h=i; h<=size-1; h++){
            tong2+=nums[h];
        }
        if(tong2==tong1){
            return jcheck;
        }
    }
    return -1;
}
int main(){
    int size;
    scanf("%d", &size);
    int nums[size];
    for(int i=0; i<size; i++){
        scanf("%d", &nums[i]);
    }
    printf("%d", findPartitionIndex(nums, size));
    return 0;
}