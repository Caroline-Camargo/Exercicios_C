/* NOME: Caroline Souza Camargo

3) Escreva um algoritmo para ler o número total de eleitores de um município, o
número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um
representa em relação ao total de eleitores */

#include <stdio.h>
 int main (){
    
     float eleitores, votosbrancos, nulos, validos, percentual;

      printf ("\nPERCENTUAL DE ELEITORES");
      printf ("\nDigite o numero total de eleitores: ");
      scanf ("%f", &eleitores);
      printf ("\nDigite o numero de votos brancos: ");
      scanf ("%f", &votosbrancos);
      printf("\nDigite o numero de votos nulos: ");
      scanf("%f", &nulos);
      validos= eleitores-(votosbrancos+nulos);
      printf("\nNumero de votos validos: %1.f", validos);

      percentual = (votosbrancos/eleitores)*100;
      printf ("\n\nPercentual de votos brancos: %.1f %%", percentual);
      percentual = (nulos/eleitores)*100;
      printf ("\nPercentual de votos nulos: %.1f %%", percentual);
      percentual = (validos/eleitores)*100;
      printf ("\nPercentual de votos validos: %.1f %%", percentual);


 }