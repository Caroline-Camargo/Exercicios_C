/*NOME: Caroline Souza Camargo

5)Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. */

#include <stdio.h>
 int main (){
    
     float nota1, nota2, nota3, resultado;

      printf ("\nMEDIA FINAL");
      printf ("\nDigite a nota 1 do aluno: ");
      scanf ("%f", &nota1);
      printf ("\nDigite a nota 2 do aluno: ");
      scanf ("%f", &nota2);
      printf ("\nDigite a nota 3 do aluno: ");
      scanf ("%f", &nota3);

      resultado = ((nota1*2)+(nota2*3)+(nota3*5))/10;

      printf ("\nMedia final do aluno: %.2f", resultado);

 }