/* NOME: Caroline Souza Camargo

4.2.Escreva um algoritmo para ler o número de gols marcados pelo Grêmio e o número de gols marcados
pelo Inter em um GRENAL. Escrever o nome do vencedor. Caso não haja vencedor deverá ser impresso a
palavra EMPATE.*/

#include <stdio.h>
 int main (){
    
     int inter, gremio;

      printf ("\nGOLS DA DUPLA GRENAL");
      printf ("\nDigite a quantidade de gols do Inter: ");
      scanf ("%d", &inter);
      printf ("\nDigite a quantidade de gols do Gremio: ");
      scanf ("%d", &gremio);

      if (inter==gremio)
      {
          printf ("\nEMPATE");
      } else if (inter>gremio)
      {
          printf ("\nInternacional possui mais gols");
      } else 
      {
          printf ("\nGremio possui mais gols");
      }  
 }