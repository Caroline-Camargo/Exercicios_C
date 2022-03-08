/* NOME: Caroline Souza Camargo

11.4 Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média
aritmética destas notas. */

#include <stdio.h>
 int main (){
     
     int alunos, i;
     float notas, nota, media;
     i=1;

    printf ("\nDigite o numero de alunos da turma");
    scanf ("%d", &alunos);

     while (i<=alunos)
     {
         printf ("\nDigite a nota do aluno %d: ", i);
         scanf ("%f", &nota);
         notas = notas+nota;
         i++;
     }
    media = notas/alunos;
    printf ("\n Media %.3f", media);
 }