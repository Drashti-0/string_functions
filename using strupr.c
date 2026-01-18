#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("Enter string: ");
    gets(a);

    strupr(a);   // uppercase ma convert

    printf("Uppercase = %s", a);

    return 0;
}

