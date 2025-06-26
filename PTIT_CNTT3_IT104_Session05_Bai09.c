#include <stdio.h>

int countPaths(int i, int j, int row, int col) {
    if (i>=row||j>=col)
        return 0;
    if (i==row-1&&j==col-1)
        return 1;
    return countPaths(i+1, j, row ,col)+ countPaths(i, j+1, row, col);
}

int main() {
    int row,col;
    scanf("%d%d", &row, &col);
    printf("%d", countPaths(0, 0, row, col));
    return 0;
}