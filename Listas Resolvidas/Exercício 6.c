/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação
    
1. Escreva um programa em C que leia uma frase e um caracter. Conte e escreva quantas vezez este
caracter aparece na frase. */

#include <stdio.h>
#include <string.h>
 
int main(){
    char caracter;
    char frase[150];       
    int i=0, quant=0;
 
    printf("\nPOR FAVOR, DIGITE UM FRASE: ");     
    gets(frase);
    printf("\nAGORA DIGITE UM CARACTER: ");
    scanf("%s", &caracter);
 
    for (i=0 ; frase[i] != '\0' ; i++){      
        if (frase[i]==caracter){
            quant++;
        }
    }
    
    printf("\nCARACTER A SER CONTADO: %c", caracter);
    printf("\nFRASE QUE FOI DIGITADA: %s", frase);
   
    printf("\nQUANTIDADE DE VEZES QUE O CARACTER APARECEU: %d", quant);

}
 
