#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//declaring functions
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text1 = get_string("Text: ");
    //calling functions in the main
    int letters = count_letters(text1);
    int words = count_words(text1);
    int sentences = count_sentences(text1);

    float L = (float)(letters) / words * 100; //calculating average of letters per the number of words
    float S = (float)(sentences) / words * 100; //calculating average of sentences per the number of words

    float index = 0.0588 * L - 0.296 * S - 15.8; //formula to determine the grade value
    printf("sum %f\n", index);
    if (index <= 16 && index >= 1)
    {
        printf("Grade %i\n", (int) round(index));
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}



int count_letters(string text) //function to count number of letters
{
    int a = strlen(text);
    int count = strlen(text);
    for (int i = 0; i < a ; i++)
    {
        if (text[i] >= 32 && text[i] <= 64)
        {
            count--;
        }
    }
    return count;
}

int count_words(string text) //function to count number of words
{
    int count = 1;
    for (int i = 0; i < strlen(text) ; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count;
}

int count_sentences(string text) //function to count number of sentences
{
    int count = 0;
    for (int i = 0; i < strlen(text) ; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}

