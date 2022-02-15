/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação

4. Escreva	um	algoritmo	que	leia	uma	quantidade	indeterminada	de	idades	de	pessoas (condição	de	
término	será	a	digitação	de	um	valor	negativo).	Conte	e	mostre	quantas	destas	pessoas	ainda não	
podem	votar (idade <	16	anos).  */

#include <stdio.h>
 int main (){
     
    int i=1, idades, naovotam=0, pare=1;

    printf ("\nOBS.: A condicao de termino sera a digitacao de um valor negativo");
    
    do
    {
        printf ("\nDigite a idade do individuo %d:     ", i);
        scanf ("%d", &idades);

         if (idades>=0)
         {
             if (idades<16)
             {
                 naovotam=naovotam+1;
                 i++;
             } else {
                 i++;
             }      
             pare=1;

         } else {
             pare=0;   
         }

    } while (pare>0);
    
    i=i-1;
    printf ("\nDos %d individuos digitados %d nao votam", i, naovotam);

 }