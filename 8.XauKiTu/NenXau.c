#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char c[100000];
int main(){
    gets(c);
    int i=0;
    while(i<strlen(c)){
        int j=i;
        int dem=1;
        while(c[j]==c[j+1]&&(j+1)<strlen(c)){
            dem++;
            j++;
        }
        printf("%c%d", c[i], dem);
        i+=dem;
    }
    return 0;
}