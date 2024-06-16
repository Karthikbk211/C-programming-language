#include <stdio.h>
#include <string.h>

int main()
{
    int roll_no;
    char name[20];
    char gender;
    float height;

    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter Gender (M/F): ");
    fflush(stdin);
    scanf("%c", &gender);

    printf("Enter Name: ");
    scanf("%.[^\n]", &name);

    printf("Enter Height (in meters): ");
    fflush(stdin);
    scanf("%f", &height);

    size_t roll_no_size = sizeof(roll_no);
    size_t gender_size = sizeof(gender);
    size_t name_size = sizeof(name);
    size_t height_size = sizeof(height);

    printf("\nMemory size of Roll Number: %zu bytes\n", roll_no_size);
    printf("Memory size of Gender: %zu bytes\n", gender_size);
    printf("Memory size of Name: %zu bytes\n", name_size);
    printf("Memory size of Height: %zu bytes\n", height_size);

    return 0;
}


