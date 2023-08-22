#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("\nSaudações amigo!\n");

    string nome = get_string("\nQual é o seu nome?: ");

    printf("\nOlá %s, diga: Olá Mundo!\n", nome);
}