#include <stdio.h>

int sumArray(int *a, int n) {
    if (n==0)
        return 0;
    return a[0]+sumArray(a+1,n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("Invalid input");
        return 1;
    }
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", sumArray(a,n));
}