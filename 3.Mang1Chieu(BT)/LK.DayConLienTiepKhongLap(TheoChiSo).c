#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int check=1;
            for(int h=i; h<j; h++){
                if(a[h]==a[j]){
                    check=0;
                    break;
                }
            }
            if(check==1){
                printf("%d ", a[j]);
            }
            else{
                break;
            }
        }
        printf("\n");
    }
    return 0;
}