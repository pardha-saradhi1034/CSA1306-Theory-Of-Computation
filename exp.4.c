#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, valid = 1;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n-1-i])
            valid = 0;
    }

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
