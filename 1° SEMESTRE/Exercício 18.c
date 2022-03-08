/*NOME: Caroline Souza Camargo

7. Faça um algoritmo que leia um número inteiro e mostre uma mensagem indicando 
se este número é par ou ímpar, e se é positivo, negativo ou zero. */

#include <stdio.h>
 int main (){
    
     int num, testando;

      printf ("\nDADOS SOBRE NUMERO");
      printf ("\nDigite um numero inteiro: ");
      scanf ("%d", &num);

      printf ("\nNumero digitado: %d",num);
      testando = num%2;
      
      if (testando==0)
      {
          printf ("\nNumero par");
      } else 
      {
          printf ("\nNumero impar");
      }  

      if (num==0)
      {
          printf ("\nNumero zero");
      } else if (num>0)
      {
          printf ("\nNumero positivo");
      } else 
      {
          printf ("\nNumero negativo");
      }  
      
 }