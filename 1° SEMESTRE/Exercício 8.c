/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação
    
O	 opressor	 galático	 Thanos	 quer	 reduzir	 a	 população	 dos	 seres	 vivos	 no	 universo.	 Ele	 consegue	
dizimar	1/15	dos	seres	por	dia.	Escreva	um	programa	em	C	que	leia	o	numero	de	seres	do	universo	
e	conte	quantos	dias	ele	irá	levar	para	reduzir	a	população pelo	menos à	metade(	usar	uma	estrutura	
de	repetição	para	contar) */

#include <stdio.h>
#include <string.h>
 
int main(){  
    int i;
    float seresreduzidos=0, seres=0, metade=0;
 
    printf("\nPOR FAVOR, DIGITE O NUMERO DE SERES VIVOS: ");     
    scanf("%f", &seres);
    metade = seres/2;
    
    
    for (i=0; seres>=metade; i++){
        if (i==0)
        {
            printf("\nPOPULACAO INICIAL: %.2f", seres);
        }  else{
            printf("\n\nDIA %d", i);
            printf("\nTHANOS REDUZIU %.3f SERES", seresreduzidos);
            printf("\nPOPULACAO RESTANTE APOS O ATAQUE %.3f", seres);
        }

        seresreduzidos = seres*0.0666666666666667;  //0.0666666666666667 FOI DEVIDO 1/15 QUE THANOS CONSEGUE MATAR
        seres = seres-seresreduzidos;
    }
    i--; 
    printf("\n\nTHANOS LEVOU %d DIAS PARA REDUZIR A POPULACAO PELA METADE", i);

    

}
 
