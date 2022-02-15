/* NOME: Caroline Souza Camargo

4.1.Escreva um algoritmo para ler as notas da 1a e 2a avaliações de um aluno, calcular 
a média e escrever se este aluno foi APROVADO, REPROVADO ou se está em EXAME. Escrever 
também a média calculada. OBS: Para ter direito ao exame o aluno deve obter média mínima 3.0.*/

#include <stdio.h>
 int main (){
    
     float n1, n2;
     float media;

      printf ("\nAVALIACOES DE UM ALUNO");
      printf ("\nDigite a nota 1 do aluno: ");
      scanf ("%f", &n1);
      printf ("\nDigite a nota 2 do aluno: ");
      scanf ("%f", &n2);

      media = (n1+n2)/2;

      printf ("\nNota 1: %.2f", n1);
      printf ("\nNota 2: %.2f", n2);
      printf ("\nMedia: %.3f", media);

      if (media>=7)
      {
          printf ("\nALUNO APROVADO");
      } else if (media>3 && media<7)
      {
          printf ("\nALUNO EM EXAME");
      } else 
      {
          printf ("\nALUNO REPROVADO");
      }  
 }