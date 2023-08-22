#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Populacao inicial
    int inicio;
    do
    {
        inicio = get_int("População inicial?: ");
    }
    while (inicio < 9);
    
    // População Final
    int final;
    do
    {
        final = get_int("População final?: ");
    }
    while (final < inicio);
    // Calculo do número em anos...
    int anos = 0;

    // Exibindo número de anos
    while (inicio < final)
    {
        inicio = inicio + (inicio / 3) - (inicio / 4);
        anos++;
    }
    printf("Years: %i\n", anos);
}