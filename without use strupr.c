#include <stdio.h>

int main() {
    char a[100];

    printf("Enter string: ");
    gets(a);

    for(int i = 0; a[i] != '\0'; i++) {

        // if small letter, convert to capital
        if(a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 32;
        }
    }

    printf("Uppercase = %s", a);

    return 0;
}
