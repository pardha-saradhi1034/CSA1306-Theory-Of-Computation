#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, n, valid = 1;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);
    i = 0;
    j = n - 1;

    while (i < j && s[i] == '0' && s[j] == '0') {
        i++;
        j--;
    }

    while (i < n && s[i] == '1')
        i++;

    if (i <= j)
        valid = 0;

    for (i = 0; i < n; i++) {
        if (s[i] != '0' && s[i] != '1')
            valid = 0;
    }

    if (valid)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
