#include <stdio.h>
#include <math.h>

/*
 * Mohammad Fatehi
 * Exercise3-1
 */

int main() {
    float cpp , ir , af ,noi, af_to_month,payment;
    printf("Enter the purchase price of the car :");
    scanf(" %f",&cpp);
    printf("Enter the down payment amount :");
    scanf(" %f",&ir);
    printf("Enter the annual fee :");
    scanf(" %f",&af);
    printf("Enter the total number of installments :");
    scanf(" %f",&noi);
    af_to_month=af/12;
    payment=( ( af_to_month * ( ir -cpp  ) ) / ( 1 - (powf((1 + af_to_month),-noi))));
    printf("Your loan amount is %f$ \n",payment*noi);
    printf("Your monthly installments are %f$ \n",payment);


    return 0;
}
