/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação
    
Para a matriz M(5 X 5) declarada abaixo:
 {0, 1, 1, 0, 0}
 {0, 0, 0, 1, 0}
 {1, 1, 0, 1, 0}
 {0, 1, 0, 0, 0}
 {1, 1, 0, 0, 0}
Suponto	 que	 a	 matriz	 represente	 um	 campo	 minado,	 onde	 “1“	 represente	 uma	 mina	 e	 “0“	
represente	campo limpo.	Escreva	um	algoritmo que	leia	a	matriz	e	um	conjunto	de	dez	pares	de	
valores(l	 ,	 c)	 que	 representem	 os	 índices	 da	 matriz.	 Conte	 quantas	 minas	 foram	 
descobretas	 e	mostre	este	resultado. */

#include <stdio.h>
#include <string.h>
 
int main(){
    int i, j, matriz[5][5], matrizdigitada[5][5], linha, coluna, acertos=0;

    matriz[0][0]=0; 
    matriz[0][1]=1;
    matriz[0][2]=1;
    matriz[0][3]=0;
    matriz[0][4]=0;
    matriz[1][0]=0;
    matriz[1][1]=0;
    matriz[1][2]=0;
    matriz[1][3]=1;
    matriz[1][4]=0;
    matriz[2][0]=1;
    matriz[2][1]=1;
    matriz[2][2]=0;
    matriz[2][3]=1;
    matriz[2][4]=0;
    matriz[3][0]=0;
    matriz[3][1]=1;
    matriz[3][2]=0;
    matriz[3][3]=0;
    matriz[3][4]=0;
    matriz[4][0]=1;
    matriz[4][1]=1;
    matriz[4][2]=0;
    matriz[4][3]=0;
    matriz[4][4]=0;


    printf("\nMATRIZ COM ZEROS: \n ");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            matrizdigitada[i][j]=0;
            printf("   %d  ", matrizdigitada[i][j]);
        }
        printf("\n "); 
    }

    printf("\n DIGITE UM CONJUTO DE 10 PARES PARA DESCOBRIR ONDE AS MINAS ESTAO ESCONDIDAS");
    for (i=0; i<10; i++){
        printf("\n\nPAR %d", i+1);
        printf("\nDIGITE A LINHA  ");
        scanf("%d", &linha);
        printf("\nDIGITE A COLUNA  ");
        scanf("%d", &coluna);
        matrizdigitada[linha][coluna]=1;
    }

    printf("\nCOMO A MATRIZ FICOU: \n ");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("   %d  ", matrizdigitada[i][j]);
        }
        printf("\n "); 
    }

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if (matrizdigitada[i][j] == 1){
                if (matrizdigitada[i][j] == matriz[i][j]){
                    acertos=acertos+1;
                }
            }
        }
    }

    printf("\nMATRIZ GABARITO: \n ");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("   %d  ", matriz[i][j]);
        }
        printf("\n "); 
    }

    printf("\n\nQUANTIDADE DE MINAS ENCONTRADAS: %d", acertos);
    
    


}
 
