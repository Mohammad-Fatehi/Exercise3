#include <stdio.h>

/*
 * Mohammad Fatehi
 * Exercise3-2
 */

int Buying_a_house() {
    float ihc , afc , tr ;
    printf("Enter the initial price of the house : ");
    scanf("%f",&ihc);
    printf("Enter the Annual Fuel Cost : ");
    scanf("%f",&afc);
    printf("Enter the tax rate : ");
    scanf("%f",&tr);
    printf("The price of a house after a five-year period is : %f  ",ihc +( ((ihc * tr) + afc)*5));
}
int main() {
    Buying_a_house();
    return 0;
}