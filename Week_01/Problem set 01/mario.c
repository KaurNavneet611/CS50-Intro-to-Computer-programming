#include <cs50.h>
#include <stdio.h>

  int get_size(void);
  void print_grid(int n);
int main(void)
{
    int num = get_size();
    print_grid(num);
}

int get_size(void)
{
    int num=0;
    do
    {
        num = get_int("Enter the number: ");
    }
    while(num<1 || num>8);
    return num;
}

void print_grid(int num)
{
    for (int a =0; a<num;a++)
    {
        for (int i = a; i<num-1;i++)
        {
            printf(" ");
        }
        for (int j=0;j<=a;j++)
        {
            printf("#");
        }
        for(int i =0 ; i<1; i++)
        {
           printf("  ");
        }
        for (int j=0;j<=a;j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
