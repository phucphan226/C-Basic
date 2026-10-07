#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int i=0;
    int thu=1;
    while(i<n){
        printf("Day con thu %d: ", thu);
        int dem=0;
        for(int j=i; j<n; j++){
            int check=1;
            for(int k=i; k<j; k++){
                if(a[k]==a[j]){
                    check=0;
                    printf("\n");
                    break;
                }
            }
            if(check==1){
                printf("%d ", a[j]);
                dem+=1;
            }
            else{
                break;
            }
        }
        i+=dem;
        thu++;
    }
    return 0;
}