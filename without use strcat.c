
#include <stdio.h>

int main() {
    char a[100], b[100];

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    int i = 0, j = 0;

    // 1) First string નો end શોધવો
    while(a[i] != '\0') {
        i++;
    }

    // 2) Second string ને first ના end થી copy કરવો
    while(b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';   // null terminate

    printf("Concatenated string = %s", a);

    return 0;
}
