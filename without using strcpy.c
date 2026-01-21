
#include <stdio.h>

int main() {
    char a[100], b[100];

    printf("Enter string: ");
    gets(a);

    // strcpy() વગર copy
    int i;
    for(i = 0; a[i] != '\0'; i++) {
        b[i] = a[i];
    }
    b[i] = '\0';   // end marking

    printf("Copied string = %s", b);

    return 0;
}
