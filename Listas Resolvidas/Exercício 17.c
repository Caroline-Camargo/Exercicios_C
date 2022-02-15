/*NOME: Caroline Souza Camargo

6.Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a média
ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas 
restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e a mensagem 
"APROVADO" se a média for maior ou igual a 5 e "REPROVADO" caso contrário*/

#include <stdio.h>
 int main (){
    
     int matricula;
     float n1, n2, n3, media;

      printf ("\nSITUACAO DO ALUNO");
      printf ("\nDigite a matricula do aluno: ");
      scanf ("%d", &matricula);
      printf ("\nDigite a nota 1 do aluno: ");
      scanf ("%f", &n1);
      printf ("\nDigite a nota 2 do aluno: ");
      scanf ("%f", &n2);
      printf ("\nDigite a nota 3 do aluno: ");
      scanf ("%f", &n3);

      if (n1>=n2 && n1>=n3)
      {
          media = ((n1*4)+(n2*3)+(n3*3))/10;
      } else if (n2>=n1 && n2>=n3)
      {
          media = ((n2*4)+(n1*3)+(n3*3))/10;
      } else
      {
          media = ((n3*4)+(n2*3)+(n1*3))/10;
      }
      
      printf ("\nMatricula do aluno: %d", matricula);
      printf ("\nNota 1: %.2f", n1);
      printf ("\nNota 2: %.2f", n2);
      printf ("\nNota 3: %.2f", n3);
      printf ("\nMedia: %.3f", media);
 
      if (media>=5)
      {
          printf ("\nALUNO APROVADO");
      } else
      {
          printf ("\nALUNO REPROVADO");
      } 
      
 }