#include <stdio.h>

int main()
{
    char fullName[100] , gender , nativePlace[100];

    printf("Enter your full name: ");
    scanf("%[^\n]", fullName);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter your native place: ");
    scanf(" %[^\n]", nativePlace);

    printf("\nOutput: %s - %c - %s\n", fullName, gender, nativePlace);

    return 0;
}



