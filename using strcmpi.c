
#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    if(strcmpi(a, b) == 0)
        printf("Strings are SAME");
    else
        printf("Strings are DIFFERENT");

    return 0;
}
