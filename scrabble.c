#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Pontos atribuídos a cada letra do alfabeto
int PONTOS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int placar_computador(string word);

int main(void)
{
    // Obtenha palavras de entrada de ambos os jogadores
    string palavra1 = get_string("Player 1: ");
    string palavra2 = get_string("Player 2: ");
    
  // Pontue ambas palavras
    int placar1 = placar_computador(palavra1);
    int placar2 = placar_computador(palavra2);

    // Mostre o vencedor
    if (placar1 > placar2)
    {
        printf("Player 1 wins!\n");
    }
    else if (placar1 < placar2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int placar_computador(string word)
{
    // TODO: Compute and return score for string
    int placar = 0;
    
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            placar += PONTOS[word[i - 'A']];
        }
        else if (islower(word[i]))
        {
            placar += PONTOS[word[i - 'a']];
        }
    }
    return placar;
}