//string gme te nakhye uper ke lower case ma nakhiye aek lower ane aek uper toy string same hoy to same aavi jay



#include <stdio.h>

int main() {
    char a[100], b[100];

    printf("Enter first string: ");
    gets(a);

    printf("Enter second string: ");
    gets(b);

    int i = 0, same = 1;

    while(a[i] != '\0' || b[i] != '\0') {

        // दोनों characters को lowercase में convert
        char ch1 = a[i];
        char ch2 = b[i];

        // Upper → lower
        if(ch1 >= 'A' && ch1 <= 'Z')
            ch1 = ch1 + 32;
        if(ch2 >= 'A' && ch2 <= 'Z')
            ch2 = ch2 + 32;

        if(ch1 != ch2) {
            same = 0;
            break;
        }

        i++;
    }

    if(same == 1)
        printf("Strings are SAME");
    else
        printf("Strings are DIFFERENT");

    return 0;
}

