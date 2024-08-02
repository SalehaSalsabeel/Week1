#include <stdio.h>

int main(void)
{
    int change;

   
    do
    {
        printf("Change owed: ");
        scanf("%d", &change);
    }
    while (change < 1);

    int coins = 0;


    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;


    coins += change / quarters;
    change %= quarters;

    coins += change / dimes;
    change %= dimes;

    coins += change / nickels;
    change %= nickels;

    coins += change / pennies;

    printf("%d\n", coins);

    return 0;
}
