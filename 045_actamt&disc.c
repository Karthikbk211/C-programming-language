#include <stdio.h>
int main()
{
    float sales, discountrate, discountamt, payableamt;
    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    if (sales >= 25000)
        discountrate = 25.0;
     else if (sales >= 20000)
        discountrate = 20.0;
     else if (sales >= 10000)
        discountrate = 10.0;
     else if (sales >= 5000)
        discountrate = 5.0;
     else if ( sales < 0 && sales > 150000 ) {
        printf("\aInvalid input , no such product with that price exists") ;
        return 0 ;}
     else
        discountrate = 0.0;
    discountamt =  sales*(discountrate / 100);
    payableamt = sales - discountamt;

    printf("Discount: %.2f%%\n", discountrate);
    printf("Discount Amount: %.2f\n", discountamt);
    printf("Actual Amount: %.2f\n", payableamt);
    printf("THANK YOU FOR SHOPPING\n");
    printf("PLEASE VISIT US AGAIN\n");
    getch();
    return 0;
}
