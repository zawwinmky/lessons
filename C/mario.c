#include <cs50.h>
#include <stdio.h>

int get_correct_height(void);
void print_space(int n);
void print_row(int n);

int main(void)
{
    int height = get_correct_height();
    for (int i = 1; i <= height; i++)
    {
        print_space(height - i);
        print_row(i);
        printf("  ");
        print_row(i);
        printf("\n");
    }    
}

int get_correct_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}

void print_space(int n)
{
    for (int i = n-1; i > 0; i--)
    {
        printf(" ");
    }
}

void print_row(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}