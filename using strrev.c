
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];

    printf("Enter string: ");
    gets(a);

    strrev(a);   // reverse thai jase

    printf("Reversed = %s", a);

    return 0;
}
