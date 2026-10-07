#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
    char c[100001];
    gets(c);
    int i=0, icheck=-1;
    int max=-1e9;
    while(i<strlen(c)){
        int j=i, dem=0;
        for(int h=j; h<strlen(c); h++){
            int check=1;
            for(int k=j; k<h; k++){
                if(c[h]==c[k]){
                    check=0;
                    break;
                }
            }
            if(check==1){
                dem++;
            }
            else{
                break;
            }
        }
        if(dem>max){
            max=dem;
            icheck=i;
        }
        i=i+dem;
    }
    for(int i=icheck; i<icheck+max; i++){
        printf("%c", c[i]);
    }
    return 0;
}