#include <cs50.h>
#include <stdio.h>

int calc_owed(int m);

int main()
{
    int m;

    // takes input for owed money. rejects money less than 0
    do
    {
        m = get_int("Change owed: ");
    }
    while (m < 0);

    int min_coins = calc_owed(m); // calculates minimum owed coins

    printf("%i\n", min_coins); // prints minimum owed coins
}

int calc_owed(int m)
{
    int q, d, n, p;
    q = (m / 25);            // calculates owed quarters
    d = ((m % 25) / 10);     // calculates owed dimes
    n = ((m % 25) % 10) / 5; // calculates owed nickels
    p = ((m % 25) % 10) % 5; // calculates owed pennies
    return q + d + n + p;
}
