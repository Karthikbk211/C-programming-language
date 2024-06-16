#include <stdio.h>

int main() {
    float PresentReading, LastReading, RatePerUnit, UnitsConsumed, ElectricityBill;

    printf("Enter present month's reading (in units): ");
    scanf("%f", &PresentReading);

    printf("Enter last month's reading (in units): ");
    scanf("%f", &LastReading);

    RatePerUnit = 7.85 ;

    UnitsConsumed = PresentReading - LastReading ;
    ElectricityBill = UnitsConsumed * RatePerUnit ;

    printf("The Units Consumed is %.2f" , UnitsConsumed) ;
    printf("\nThe Electricity Bill is %.2f" , ElectricityBill) ;
    return 0;
}

