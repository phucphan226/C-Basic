#include<stdio.h>
int dem=0;
void ham(int a[], int n, int k, int vt, int tong) {
    if (tong==k) {
        dem++;
        return;
    }
    if (tong>k||vt==n) {
        return;
    }
    ham(a, n, k, vt+1, tong+a[vt]);
    ham(a, n, k, vt+1, tong);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    ham(a, n, k, 0, 0);
    printf("%d", dem);
    return 0;
}
