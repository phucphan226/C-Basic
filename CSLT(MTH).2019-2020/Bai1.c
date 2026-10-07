#include<stdio.h>
#include<math.h>
int checkSNT(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int sl;
    scanf("%d", &sl);
    int a[sl];
    for(int i=0; i<sl; i++){
        scanf("%d", &a[i]);
    }
    int dem=0;
    for(int i=0; i<sl; i++){
        if(checkSNT(a[i])){
            dem+=1;
        }
    }
    printf("%d", dem);
}