#include<stdio.h>
int main()
{
    float distancekm , distancem ;
    printf("The total distance the bus covers from a to b in kilometers is : ") ;
    scanf("%f" , &distancekm) ;

    distancem = distancekm*1000 ;
    printf("The total distance the bus covers from a to b in metres is %.2f" , distancem) ;
    return 0 ;
}
