#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    printf("\nBem vindo a Criptografia de Cesar!!\n");
    if (argc == 2)
    {
        const int CHAVE = atoi(argv[1]);
        bool chavevalida = true;
        int ler = strlen(argv[1]);
        for (int i = 0; i < ler; i++)
        {
          if (isdigit(argv[1][i]) == false)
          {
              chavevalida = false;
              i = ler;
          }

       }
       if (chavevalida)
       {
           string texto = get_string("plaintext: ");

           int ler_texto = strlen(texto);

           for (int i = 0; i < ler_texto; i++)
           {
               if (isupper(texto[i]))
               {
                   if(texto[i] + CHAVE > 'Z')
                   {
                       int chaverestante = (texto[i] + CHAVE) - 'Z';
                       if (chaverestante > 'Z' -'A')
                       {
                           while (chaverestante >= ('Z' - 'A'))
                           {
                               chaverestante = chaverestante - ('Z' - 'A');
                           }
                           if (texto[i] + chaverestante > 'Z')
                           {
                               chaverestante = texto[i] + chaverestante - 'Z';
                               texto[i] = 'A' +chaverestante - 1;
                           }
                           else
                           {
                               texto[i] = 'a' + chaverestante - 1;
                           }
                       }
                        else
                        {
                            texto[i] = 'A' + chaverestante - 1;
                        }

                    }
                    else if (texto[i] + CHAVE <= 'Z')
                    {
                        texto[i] = texto[i] + CHAVE;
                    }
                }
                if (islower(texto[i]))
                {
                    if(texto[i] + CHAVE > 'z')
                     {
                        int chaverestante = (texto[i] + CHAVE) - 'z';
                        if (chaverestante >= 'z' -'a')
                        {
                            while (chaverestante >= ('z' - 'a'))
                            {
                                chaverestante = chaverestante - (26);
                            }
                            if (texto[i] + chaverestante > 'z')
                            {
                                chaverestante = texto[i] + chaverestante - 'z';
                                texto[i] = 'a' + chaverestante - 1;
                            }
                            else
                            {
                                   texto[i] = 'a' + chaverestante - 1;
                            }
                        }
                        else
                        {
                                  texto[i] = 'a' + chaverestante - 1;
                        }

                    }
                    else if (texto[i] + CHAVE <= 'z')
                    {
                        texto[i] = texto[i] + CHAVE;
                    }
                }
            }

            printf("ciphertext: %s\n", texto);
        }
        else
        {
            printf("Use a chave: ./caesar key\n");
            printf("1");
            return(1);
        }
    }
    else if (argc !=2)
    {
       printf("Use a chave: ./caesar key\n");
       printf("1");
       return(1);
    }
}