/* NOME: Caroline Souza Camargo

17.3 Ler uma matriz G 5 x 5, classificar cada linha da matriz em ordem crescente. Após o processo de
classificação escrever a matriz. */

#include <stdio.h>
 int main (){
     
    int matriz[3][3],i=0, j=0, valor, maior=0;

    printf ("\nDigite valor para os elementos da matriz\n\n");
    for ( i=0; i<3; i++ ){
        for ( j=0; j<3; j++ ) {
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &matriz[i][j]);
        }
    }

    printf ("\n\nMatriz digitada:\n\n");
    for ( i=0; i<3; i++ ){
        for ( j=0; j<3; j++ ) {
            printf ("    %d", matriz[i][j]);
        }
        printf("\n");
    }

    for ( i=0; i<3; i++ ){
        for ( j=0; j<3; j++ ) {
            if (matriz[i][j] >= maior){
            maior=maior;
            }
        }
    }
    printf("maior valor: %d", maior);
    for ( j=0; j<3; j++ ) {
        if (matriz[0][j] >= maior){
            maior=maior;
        }
    }
    printf("maior valor: %d", maior);
 }
    