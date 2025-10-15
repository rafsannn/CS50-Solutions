#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    // Get input text from the user
    string text = get_string("Text: ");

    int letter_count = 0, word_count = 0, sentence_count = 0;

    // Iterate over the text to count letters, words, and sentences
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
        // A word is counted when a space is found after a non-space character
        // or at the end of the text if it doesn't end with a space.
        else if (isspace(text[i]))
        {
            word_count++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentence_count++;
        }
    }
    // The number of words is one more than the number of spaces.
    // This handles the last word and cases with no spaces.
    word_count++; 
    
    // Avoid division by zero if there are no words
    if (word_count == 0)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    
    // Calculate Coleman-Liau index
    float L = (float) letter_count / word_count * 100.0;
    float S = (float) sentence_count / word_count * 100.0;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int grade = round(index);
    
    // Print the grade level
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}