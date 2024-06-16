#include<stdio.h>
main ()
{
    float Fahrenheit , Centigrade ;
    printf("Enter Temperature In Fahrenheit ..:") ;
    scanf("%f" , &Fahrenheit) ;

    Centigrade = (Fahrenheit - 32)*5/9 ;
    printf("Temperature in Centigrade is : %.2f" , Centigrade) ;

}
