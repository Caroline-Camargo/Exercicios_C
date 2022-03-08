/* NOME: Caroline Souza Camargo

16.1 Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:
a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz */

#include <stdio.h>
 int main (){
     
    int matriz[5][5],i=0, j=0, somas=0;

    printf ("\nDigite valor para os elementos da matriz\n\n");
    for ( i=0; i<5; i++ ){
        for ( j=0; j<5; j++ ) {
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }

    printf ("\n\nMatriz digitada:\n\n");
    for ( i=0; i<5; i++ ){
        for ( j=0; j<5; j++ ) {
            printf ("    %d", matriz[i][j]);
        }
        printf("\n");
    }
   
    somas=0;
    for ( j=0; j<5; j++ ){
        somas = somas + matriz[3][j];
    }
    printf("\nSoma da linha 3= %d", somas);


    somas=0;
    for ( i=0; i<5; i++ ){
        somas = somas + matriz[i][2];
    }
    printf("\nSoma da coluna 2 = %d", somas);


    somas=0;
    for ( i=0; i<5; i++ ){
        for ( j=0; j<5; j++ ) {
            if (i==j)
            {
                somas = somas + matriz[i][j];
            }
        }
    }
    printf("\nSoma da diagonal principal= %d", somas);


    somas=0;
    for ( i=0; i<5; i++ ){
        for ( j=0; j<5; j++ ) {
            if (i<j)
            {
                somas = somas + matriz[i][j];
            }
        }
    }
    printf("\nSoma da diagonal secundaria= %d", somas);


    somas=0;
    for ( i=0; i<5; i++ ){
        for ( j=0; j<5; j++ ) {
            somas = somas + matriz[i][j];
        }
    }
    printf("\nSoma de todos elementos da matriz= %d", somas);
 }
 
