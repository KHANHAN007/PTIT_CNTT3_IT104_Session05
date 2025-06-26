#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidNumber(char *str) {
    if (*str == '\0')
        return 0;
    while (*str) {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}
int pow10(int n) {
    if (n == 0)
        return 1;
    return 10 * pow10(n - 1);
}
int toInteger(char *str, int index, int len) {
    if (index == len)
        return 0;
    return (str[index] - '0') * pow10(len - index - 1) + toInteger(str, index + 1, len);
}
int main() {
    char str[100];
    scanf("%s", str);

    if (!isValidNumber(str)) {
        printf("Khong hop le\n");
    } else {
        int start = 0;
        while (str[start] == '0')
            start++;

        if (str[start] == '\0')
            printf("0\n");
        else
            printf("%d\n", toInteger(str, start, strlen(str)));
    }

    return 0;
}
