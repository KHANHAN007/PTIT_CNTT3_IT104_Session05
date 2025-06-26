#include <stdio.h>

int countPaths(int i, int j, int row, int col, int blockedRow, int blockedCol) {
    if (i >= row || j >= col || (j == blockedCol && i == blockedRow))
        return 0;
    if (i == row - 1 && j == col - 1)
        return 1;
    return countPaths(i + 1, j, row, col, blockedRow, blockedCol) + countPaths(i, j + 1, row, col, blockedRow, blockedCol);
}
int main() {
    int row, col, blockedRow, blockedCol;
    scanf("%d%d%d%d", &row, &col, &blockedRow, &blockedCol);
    printf("%d", countPaths(0, 0, row, col, blockedRow, blockedCol));
    return 0;
}