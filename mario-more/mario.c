#include <cs50.h>
#include <stdio.h>

void print_grid(int n);

int main()
{
    int n;

    // gets input of height with inputs ranging 1 to 8 being allowed
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // prints the grid
    print_grid(n);
}

void print_grid(int n)
{
    for(int i = n; i != 0; i--)
    {

        // prints spaces
        for(int j = 1; j < i; j++)
        {
            printf(" ");
        }

        // prints left hashes
        for (int j = i; j <= n; j++)
        {
            printf("#");
        }

        // prints gap
        printf("  ");

        // prints right hashes
        for (int j = i; j <= n; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}
