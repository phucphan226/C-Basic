#include<stdio.h>
#include<math.h>
int check(int a[], int n){
    int dem25=0, dem50=0;
    for(int i=0; i<n; i++){
        if(a[i]==25){
            dem25+=1;
        }
        else if(a[i]==50){
            if(dem25==0){
                return 0;
            }
            else{
                dem50+=1;
                dem25-=1;
            }
        }
        else if(a[i]==100){
            if(dem25==0||(25*dem25+50*dem50)<75){
                return 0;
            }
            else if(dem50!=0){
                dem50-=1;
                dem25-=1;
            }
            else{
                dem25-=3;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    if(check(a, n)==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}