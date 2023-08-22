#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("\nSaudações - Dinheiro Trocado.\n"); 

    float din;
    do
    {
        din = get_float("\nDigite o valor do troco?: R$");
        
     }while (din < 0);
     
     int cents = round(din * 100);
     int moedas = 0;
     
     while (cents >= 25)
     {
         cents -= 25;
         moedas++;
     }
     while (cents >=10)
     {
         cents -= 10;
         moedas++;
     }
     while (cents >= 5)
     {
         cents -= 5;
         moedas++;
     }
     while (cents >= 1)
     {
         cents -= 1;
         moedas++;
     }
     
         printf("%i\n", moedas);
     
}