/* NOME: Caroline Souza Camargo

11.2 Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora 
deste intervalo. Escrever o resultado das duas contagens. */

#include <stdio.h>
 int main (){
     
     int num;
     int n1, intervalo, foraintervalo;
     n1=1;
     intervalo=0;
     foraintervalo=0;

     while (n1<=10)
     {
         printf ("\nDigite o numero %d:", n1);
         scanf ("%d", &num);
         if (num<=20 && num>=10)
         {
             intervalo = intervalo + 1;
         } else
         {
             foraintervalo = foraintervalo + 1;
         }
         n1++;
     }

    printf ("\n Quantidade de numeros que estao no intervalo %d", intervalo);
    printf ("\n Quantidade de numeros que estao fora do intervalo %d", foraintervalo);
 }
