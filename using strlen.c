#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("Enter string: ");
    gets(a);

    int len = strlen(a);   // length find करे

    printf("Length = %d", len);

    return 0;
}

