#include<stdio.h>
int main()
{
    int speed ;
    printf("Enter the speed of the vehicle in kmph : ") ;
    scanf("%d" , &speed) ;

    if ( speed > 30)
    printf("The vehicle is speeding.\n") ;
    else
        printf("The vehicle is driving safely.\n") ;
    return 0 ;
}
