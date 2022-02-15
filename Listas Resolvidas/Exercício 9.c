/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação
    
4. Escreva um programa em C que leia 10 valores e armazene-os em um vetor, em seguida leia um
número inteiro que represente um índice deste vetor(validando entre 1 e 10 inclusive). Logo após
retirar o elemento desta posição deslocando os demais elementos.Não deve ficar espaço vazio no
vetor */

#include <stdio.h>
#include <string.h>

int main(){
          
    int i, cont, vetor[10], indice;

    for(i=0; i<10; i++){
        printf("\nPOR FAVOR, DIGITE O VALOR %d  ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    printf("\nVETOR DIGITADO: ");
    for(i=0; i<10; i++){
        printf(" %d  ", vetor[i]);
    }

    cont=1;
    while (cont!=0) {
        printf("\nDIGITE O INDICE DESTE VETOR QUE DESEJA RETIRAR   ");
        printf("\nOBS.: O INDICE ZERO E A PRIMEIRA POSICAO DO VETOR  ");
        scanf("%d", &indice);
        if (indice>=0 && indice<10)
        {
            cont=0;
        } else {
            printf("\n!!! O NUMERO DIGITADO DEVE ESTAR ENTRE 1 E 10 !!!");
            cont=1;
        }       
    }


    for (i=indice; i<10; i++){
        vetor[i]=vetor[i+1];
    }

    printf("\nNOVO VETOR SEM O ESPACO VAZIO: ");
    for(i=0; i<9; i++){
        printf(" %d  ", vetor[i]);
    }

    
    
}
 
