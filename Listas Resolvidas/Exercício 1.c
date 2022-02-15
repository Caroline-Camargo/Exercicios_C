/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação

1. Escreva um algoritmo que leia 50 valores que representem preços de produtos. Escreva o valor do
produto mais caro e dê um desconto de 12% para o produto mais barato.  */

#include <stdio.h>
 int main (){
     
    float precos, desconto=0, maior=0, menor=1000000000000000000000;
    int i=1;
    
    while (i<=50)
    {
        printf("\nDigite o preco do produto %i:   ", i);
        scanf ("%f", &precos);
        if(precos>maior){
            maior=precos;
        }
        if (precos<menor)
        {
            menor=precos;
        }
        i++;
    }

    desconto= menor-(menor*0.12);
    printf("\nValor do produto mais caro: R$ %.3f", maior);
    printf("\nValor do produto mais barato: R$ %.3f", menor);
    printf("\nValor do produto mais barato com 12 por cento de desconto R$ %.3f", desconto);
    
 }