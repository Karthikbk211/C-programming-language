#include <stdio.h>

int main() {
    char uppercase, lowercase;

    printf("Enter any uppercase alphabet from A to Z: ");
    scanf(" %c", &uppercase);

    lowercase = uppercase + 32;
    printf("Lowercase form of %c is %c\n", uppercase , lowercase);

    return 0;
}

