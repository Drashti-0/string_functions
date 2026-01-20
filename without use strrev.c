#include <stdio.h>

int main() {
    char a[100];
    printf("Enter string: ");
    gets(a);

    int i = 0, j=0;

    // find length manually
    while (a[j] != '\0')
        { j++;
    }
    j--;

    // reverse by swapping
    while(i < j) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    printf("Reversed = %s", a);
    return 0;
}



/*#include<stdio.h>
#include<string.h>
int main(){

char a[100];
printf("Enter string:  ");
gets(a);

int l=strlen(a);

for(int i=l-1;i>=0;i--){
    printf("%c",a[i]);

}
*/
