#include <string.h>
#include <stdio.h>

int main(void)
{
    //Take input of users text
    char text[1000];
    printf("Text: ");
    fgets(text, sizeof(text), stdin);

    // Figure out the number of sentences and words
    int sentence_count = 0, word_count = 1;
    for(int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence_count++;
        }
        if (text[i] == ' ')
        {
            word_count++;
        }
    }
    float L = 100 * (strlen (text) + 1) / word_count;
    printf("%f\n", L);
    // Calculate the percentage ot sentences and words

    // Apply 
}