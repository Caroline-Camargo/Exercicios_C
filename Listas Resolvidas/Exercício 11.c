/*NOME: Caroline Souza Camargo

1) Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular
e escrever a área do retângulo */

#include <stdio.h>
 int main (){
    
     float base, altura, area;
      printf ("\nAREA DE UM RETANGULO");
      printf ("\nDigite a base: ");
      scanf ("%f", &base);
      printf ("\nDigite a altura: ");
      scanf ("%f", &altura);

      area = base * altura;

      printf ("\nArea do retangulo: %.2f", area);

 }




