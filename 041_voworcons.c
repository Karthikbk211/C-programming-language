#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (isalpha(ch))
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("It's a vowel.\n");
    else
        printf("It's a consonant.\n");
    else
        printf("Invalid Input.\n");
    return 0;
}
