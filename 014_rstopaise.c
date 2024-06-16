#include<stdio.h>
int main()
{
    int Rupee , Paise ;
    printf("Enter The No. Of Rs is ..:") ;
    scanf("%d" , &Rupee) ;

    Paise = Rupee*100 ;
    printf("The No. Of Paise is %d" , Paise) ;
    return 0 ;

}
