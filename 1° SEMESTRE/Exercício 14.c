/* NOME: Caroline Souza Camargo

4) O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao
consumidor*/

#include <stdio.h>
 int main (){
    
     float custofabrica, custofinal;
      printf ("\nCUSTO FINAL DE UM CARRO");
      printf ("\nDigite o custo de fabrica do carro: ");
      scanf ("%f", &custofabrica);

      custofinal = custofabrica+(0.28*custofabrica)+(0.45*custofabrica);

      printf ("\nCusto final do carro sera de: %.2f reais", custofinal);

 }