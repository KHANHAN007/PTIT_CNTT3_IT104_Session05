#include <stdio.h>

void printNumber(int n, int i) {
    if (i>n) {
        return;
    }
    printf("%d\t", i++);
    printNumber(n,i);
}
int main(){
    int n;
    scanf("%d", &n);
    printNumber(n, 1);
}