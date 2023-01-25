#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;
void print_bulb(int bit);

int main(void)
{
    // TODO
    string text = get_string("Enter your text: "); //user input text
    int arr[8] = {0};
    int temp;
    for (int a = 0; a < strlen(text); a++)
    {
        int val = text[a];
        //printf("%i",val);
        for (int i = 0; i < BITS_IN_BYTE; i++)
        {
            arr[i] = val % 2;
            val = val / 2;
            //print_bulb(arr[i]);
        }
        for (int j = 7; j >= 0; j--) //loop to reverse the array
        {
            print_bulb(arr[j]);
        }
        printf("\n");
    }
    return 0;
}
void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
