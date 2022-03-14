
/*
    NOME: Caroline Souza Camargo
    MATRÍCULA: 21103073
    
    Escreve um algoritmo para ler uma quantidade indeterminada de valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O algoritmo será encerrado imediatamente após a leitura de um valor NULO ou NEGATIVO
*/

#include <stdio.h>

int main()
{
    int num;
    printf("\nDigite um numero:");
    scanf("%d", &num);
    
    while (num>0)
    {
        if (num%2==0)
        {
            printf("Numero par\n");
        } else
        {
            printf("Numero impar\n");
        }
        
        printf("\nDigite outro numero: \n");
        scanf("%d", &num);
    }
    
    
    return 0;
}

