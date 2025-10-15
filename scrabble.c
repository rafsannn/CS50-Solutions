#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int get_point(char s[]);

int main(void)
{
    // takes input of player 1 and 2
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    // inatializes points to p1p and p2p for players using get_point function
    int p1p = get_point(p1), p2p = get_point(p2);

    // checks who's the winner or if it's a tie and prints the result
    if (p1p > p2p)
    {
        printf("Player 1 wins!\n");
    }
    else if (p2p > p1p)
    {
        printf("Player 2 wins!\n");
    }
    else if (p2p == p1p)
    {
        printf("Tie!\n");
    }
}

int get_point(char s[])
{
    int point = 0;

    // loop till i reaches 1 less then the strings legnth
    // adds mark corresponding to matched
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (strchr("aeilnorstu", tolower(s[i])))
        {
            point += 1;
        }

        if (strchr("dg", tolower(s[i])))
        {
            point += 2;
        }
        if (strchr("bcmp", tolower(s[i])))
        {
            point += 3;
        }
        if (strchr("fhvwy", tolower(s[i])))
        {
            point += 4;
        }
        if (strchr("k", tolower(s[i])))
        {
            point += 5;
        }
        if (strchr("jx", tolower(s[i])))
        {
            point += 8;
        }
        if (strchr("qz", tolower(s[i])))
        {
            point += 10;
        }
    }
    return point;
}
