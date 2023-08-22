#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\nSaudações! Construindo uma pirâmide do Super Mário.\n");


    int n;
    do
    {
        n = get_int("\nDigite um numero positivo e inteiro de 1 até 8:\n");

    }
    while (n < 1 || n > 8);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i + j < n - 1)
                printf(" ");
            else    
                printf("#");
        }
        printf("\n");
    }
}