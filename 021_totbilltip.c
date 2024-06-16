#include<stdio.h>
int main()
{
    float TotalBill , Tippercent ;
    int Friends ;
    printf("Enter Total Bill Amount : ") ;
    scanf("%f" , &TotalBill) ;

    printf("Enter The Tip Percentage (5 or 10) : ") ;
    scanf("%f" , &Tippercent) ;

    printf("Enter The No. Of Friends : ") ;
    scanf("%d" , &Friends) ;

    TotalBill = TotalBill + ( TotalBill*Tippercent/100) ;
    float AmtPerFriend = TotalBill/Friends ;

    printf("Each One Have To Pay Rs : %.2f\n" , AmtPerFriend) ;
    return 0 ;

}
