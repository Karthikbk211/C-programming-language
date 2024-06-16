#include<stdio.h>
main ()
{
    float Radius , Area_of_Circle ;
    const float PI = 3.14;
    Radius=Area_of_Circle=0 ;
    printf("Enter The Radius of Circle ..: ") ;
    scanf("%f" , &Radius) ;

    Area_of_Circle = PI*Radius*Radius ;

    printf("The Area Of The Circle For The Radius %.2f is %f ", Radius , Area_of_Circle) ;

}
