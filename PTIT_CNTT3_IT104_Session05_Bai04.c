#include <stdio.h>

int sumNumber(int a,int b) {
    if (a>b)
        return 0;
    return a + sumNumber(a+1,b);
}
int main() {
    int first, second;
    if (first<0 || second<0) {
        printf("Khong hop le");
    }
    scanf("%d %d", &first, &second);
    printf("%d", sumNumber(first,second));
}

