/*NOME: Caroline Souza Camargo

5. Elabore um algoritmo que, dada a idade de um nadador classifica-o em uma das seguintes
categorias:
        infantil	A	=	5	- 7	anos	
        infantil	B	=	8-10	anos	
        juvenil	A	=	11-13	anos	
        juvenil	B	=	14-17	anos	
        adulto	=	maiores	de	18	anos*/

#include <stdio.h>
 int main (){
    
     int idade;

      printf ("\nCATEGORIA DO NADADOR");
      printf ("\nDigite a idade do nadador: ");
      scanf ("%d", &idade);

      printf ("\nIdade do nadador: %d", idade);
      if (idade>=5 && idade<=7)
      {
          printf ("\nClassificacao do nadador: INFANTIL A");
      } else if (idade>=8 && idade<=10)
      {
          printf ("\nClassificacao do nadador: INFANTIL B");
      } else if (idade>=11 && idade<=13)
      {
          printf ("\nClassificacao do nadador: JUVENIL A");
      }  else if (idade>=14 && idade<=17)
      {
          printf ("\nClassificacao do nadador: JUVENIL B");
      } else
      {
          printf ("\nClassificacao do nadado: ADULTO");
      }
      
 }