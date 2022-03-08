/* NOME: Caroline Souza Camargo

11.1 Ler 10 valores e escrever quantos destes valores são negativos. */

#include <stdio.h>
 int main (){
     
     float num;
     int n1, negativo;
     n1=1;
     negativo=0;

     while (n1<=10)
     {
         printf ("\nDigite o numero %d:", n1);
         scanf ("%f", &num);
         if (num < 0)
         {
             negativo = negativo + 1;
         }
         
         n1++;
     }

    printf ("\n NUMEROS NEGATIVOS");
    printf ("\n Quantidade %d:, negativo);
 }