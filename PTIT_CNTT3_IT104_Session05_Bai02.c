#include <stdio.h>

int sumNumber(int n){
    if (n==1)
        return 1;
    return n+sumNumber(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    if (n<=0) {
        printf("Khong hop le");
        return 1;
    }
    printf("%d", sumNumber(n));
    return 0;
}
