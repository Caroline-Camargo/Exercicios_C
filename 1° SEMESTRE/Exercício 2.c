/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação

2. Escreva um programa que leia o salário de 60 indivíduos (aceitar somente valores positivos). Para
cada valor lido calcule e escreva um aumento de salário segundo dados abaixo:
    2.5% p/ salário > =8000
    10% p/ salário entre 5000 e 8000
    15% p/ o menor <= 5000               */

#include <stdio.h>
 int main (){
     
    float salarios, aumento;
    int i=1;
    
    while (i<=60)
    {
        printf("\nDigite o salario do funcionario %i:   ", i);
        scanf ("%f", &salarios);
        if (salarios<=0)
        {
            printf("\nSalario menor ou igual a zero nao e permitido");
        } else {         
            if(salarios>=8000){
                aumento=salarios+(salarios*0.025);
            } else if (salarios>5000 && salarios<8000)
            {
                aumento=salarios+(salarios*0.10);
            } else {
                aumento=salarios+(salarios*0.15);
            } 

            printf("\nFUNCIONARIO %i", i);
            printf("\nSalario Inicial era: R$ %.2f", salarios);
            printf("\nSalario com Aumento ficou: R$ %.2f", aumento);
            i++;

        }   
    }
 }