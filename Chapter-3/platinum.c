#include <stdio.h>

#define PLATINUM_PRICE_IN_USD 29196.07f

/*
    Calculates the worth of platinums in USD
    @param platinums float
    @returns USD amount of platinum worth
*/
float getPlatinumPrice(float);

int main(void)
{
    float weight;

    printf("Hello! Would you like to learn how much you're worth in platinums?\n");
    printf("Then enter your weight in kilograms!\n");
    
    printf("Your weight: ");
    scanf("%f", &weight);
    
    float platinumWorth;
    platinumWorth = getPlatinumPrice(weight);
    
    printf("\nYour platinum worth is: $%.2f!\n", platinumWorth);
    printf("You must be rich!\n");
    
    printf("Press enter to close the program..\t");
    getchar();
    getchar();
    
    return 0;
}


float getPlatinumPrice(float platinums) {
    return platinums * PLATINUM_PRICE_IN_USD;
}