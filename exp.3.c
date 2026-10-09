#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int n, i, valid = 1;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);

    if (n < 2 || s[0] != '0' || s[n-1] != '1')
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
