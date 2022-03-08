/* NOME: Caroline Souza Camargo

1. Escreva um algoritmo para repetir a leitura de um número enquanto o valor
fornecido for diferente de 0. Para cada número fornecido, imprimir se ele é
NEGATIVO ou POSITIVO. Quando o número 0 for fornecido a repetição deve
ser encerrada sem imprimir mensagem alguma. */

#include <stdio.h>
 int main (){
     
     float n1=1;
    do
    {
        printf ("\nDigite um numero");
        scanf ("%f", &n1);
         if (n1>0)
         {
             printf ("\nNumero positivo");
         } else if (n1<0) 
         {
             printf ("\nNumero negativo");
         }
    } while (n1 != 0);
    
 }