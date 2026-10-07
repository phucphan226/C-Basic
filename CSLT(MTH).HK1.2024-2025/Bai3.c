#include<stdio.h>
int cnt[100];
int main(){
    int n, b[100][100], max=-1e9, m=0, sum=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<24; i++){
        if(a[i]%2!=0){
            int dem=1;
            cnt[dem]+=1;
            int j=i+1;
            while(a[j]%2!=0&&j<24){
                dem+=1;
                cnt[dem]+=1;
                j+=1;
            }
            if(dem>max){
                max=dem;
                m=0;
                for(int k=0; k<dem; k++){
                    b[m][0]=(i+k)/6;
                    b[m][1]=(i+k)%6;
                    m+=1;
                }
            }
        }
    }
    for(int i=1; i<=100; i++){
        if(cnt[i]!=0){
            sum+=cnt[i];
        }
    }
    printf("%d\n%d\n", sum, max);
    for(int i=0; i<m; i++){
        printf("%d %d\n", b[i][0], b[i][1]);
    }
    return 0;
}