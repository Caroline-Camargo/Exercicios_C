/*NOME: Caroline Souza Camargo

2) Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e
escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e
mês com 30 dias. */

#include <stdio.h>
 int main (){
    
     int anos, meses, dias, diastotal;
      printf ("\nIDADE EXPRESSA EM DIAS");
      printf ("\nDigite quantos anos voce tem: ");
      scanf ("%d", &anos);
      printf ("\nDigite quantos meses: ");
      scanf ("%d", &meses);
      printf ("\nDigite quantos dias:");
      scanf ("%d", &dias);

      diastotal = ((anos*365)+(meses*30))+dias;

      printf ("\nVoce possui %d dias de vida", diastotal);

 }



