#include <stdio.h>

int main() {
    char a[100], b[100];
    int i, flag = 0;

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    for(i = 0; a[i] != '\0' || b[i] != '\0'; i++) {
        if(a[i] != b[i]) {
            flag = 1;   // strings are different
            break;
        }
    }

    if(flag == 0)
        printf("Strings are SAME");
    else
        printf("Strings are NOT SAME");

    return 0;
}

