#include <stdio.h>
#include <math.h>

/*
 * Mohammad Fatehi
 * Exercise3-3
 */
int Flu(){

    for(int i = 0; i < 3; ++i){
        float day =0;
        float cases=1;
        double total_cases;
        printf("\n");
        printf("Enter a day to calculate :");
        scanf("%f",&day);
        printf("\n");
        day=day;
        for(int x=0; x < day; ++x){
            cases+=(cases*0.28);
            total_cases=cases;
        }
        printf("The number of predicted cases is : %f",total_cases);
        printf("\n");
    }

}

int main() {
    Flu();
    return 0;
}
