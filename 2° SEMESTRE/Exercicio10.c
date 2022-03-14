
/*
    NOME: Caroline Souza Camargo
    MATRÍCULA: 21103073
    
    Escreva um programa para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los em ordem crescente.
*/

#include <stdio.h>
int main()
{
    int i=0, num1, num2;
    
    while (i==0)
    {
        printf ("Digite dois valores:\n");
        scanf ("%d%d",&num1, &num2);
        if (num1 == num2)
        {
            i=0;
            printf("O valores devem ser diferentes\n");
        } else
        {
            i=1;
        }
    }

    printf("\nValores em ordem crescente\n");
    if (num1 > num2)
    {
        printf("%d\n", num2);
        printf("%d\n", num1);
    } else
    {
        printf("%d\n", num1);
        printf("%d\n", num2);
    }
    

    
}

