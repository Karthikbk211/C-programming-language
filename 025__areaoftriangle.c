#include<stdio.h>
int main()
{
    float base , height , area ;
    printf("Enter the base of the triangle : ") ;
    scanf("%f" , &base) ;

    printf("Enter the height of the triangle : ") ;
    scanf("%f" , &height) ;

    area = 0.5*base*height ;
    printf("The area of the triangle of base %.2f and height %.2f is %.2f" , base , height , area) ;
    printf("\n") ;
    return 0 ;
}
