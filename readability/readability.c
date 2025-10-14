#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_int("What's your name?");
    printf("Hello, %s\n", name);
}