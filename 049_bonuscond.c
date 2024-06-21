#include <stdio.h>

int main() {
    char maritalStatus;
    char gender;
    int age;

    printf("Enter marital status (m for married, u for unmarried): ");
    scanf(" %c", &maritalStatus);

    printf("Enter gender (m for male, f for female): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    if (maritalStatus == 'm' && age > 20 && age < 55 ) {
        printf("You are eligible for a bonus.\n");
    } else if (maritalStatus == 'u') {
        if ((gender == 'm' && age > 30) || (gender == 'f' && age > 25)) {
            printf("You are eligible for a bonus.\n");
        } else {
            printf("You are not eligible for a bonus.\n");
        }
    } else {
        printf("\aInvalid input.\n");
    }

    return 0;
}
