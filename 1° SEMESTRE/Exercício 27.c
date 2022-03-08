/* NOME: Caroline Souza Camargo

11.6 Ler 2 valores (considere que o primeiro valor lido sempre será menor que o segundo), calcular e
escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).
Reescreva o exercício anterior considerando que o primeiro pode ser maior que o segundo e viceversa.*/

#include <stdio.h>
 int main (){
     
     float n1, n2, soma=0, valores, valor1, valor2;
     int i=1;
     
     printf ("\nDigite o primeiro valor:");
     scanf ("%f", &n1);
     printf ("\nDigite o segundo valor:");
     scanf ("%f", &n2);
    
    if (n1>n2)
    {
        valor1 = n1;
        valor2 = n2;
    } else if (n1==n2)
    {
        valor1 = 0;
        valor2 = 1;
        printf ("\nOs valores sao iguais");
    }
     else
    {
        valor1 = n2;
        valor2 = n1;
    }
    

     while (valor2<=valor1)
     {
         soma = soma + valor2;
         valor2 = valor2 + 1;
     }

    printf ("\n Soma dos valores entre eles %.3f", soma);
 }
