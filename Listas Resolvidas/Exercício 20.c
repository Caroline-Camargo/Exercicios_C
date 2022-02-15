/* NOME: Caroline Souza Camargo

4.3.Escreva um algoritmo para ler o número de lados de um polígono regular, e a medida do lado(a
medida do lado só deve ser lida para polígono com 3 ou 4 lados). Calcular e imprimir o seguinte:
Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
Se o número de lados for igual a 5 escrever PENTÁGONO */

#include <stdio.h>
 int main (){
    
     int num;
     float medida, resultado;

      printf ("\nPOLIGNO REGULAR");
      printf ("\nDigite o numero de lados do poligno: ");
      scanf ("%d", &num);

      printf ("\nNumero de lados: %d", num);
      
      if (num==3)
      {
          printf ("\nDigite a medida do lado: ");
          scanf ("%f", &medida);
          resultado = medida*3;

          printf ("\nTipo de poligno: TRIANGULO");
          printf ("\nArea: %.2f", resultado);
      } else if (num==4)
      {
          printf ("\nDigite a medida do lado: ");
          scanf ("%f", &medida);
          resultado = medida*medida;

          printf ("\nTipo de poligno: quadrado");
          printf ("\nPerimetro: %.2f", resultado);
      } else if (num==5)
      {
          printf ("\nTipo de poligno: pentagono");
      } else
      {
          printf ("\npoligno nao identificado");
      }
 }