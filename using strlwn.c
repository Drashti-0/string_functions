#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("Enter string: ");
    gets(a);

    strlwr(a);   // lowercase ma convert

    printf("Lowercase = %s", a);

    return 0;
}

