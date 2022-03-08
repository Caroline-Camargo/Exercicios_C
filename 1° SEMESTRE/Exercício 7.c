/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação

2. Escreva um programa em C que leia uma palavra e diga se é ou não um palíndromo. Um palindromo
é um palavra ou frase que escrita de maneira inversa é igual a original. ROMA = AMOR 

OBS.: ROMA NÃO É UM PALÍNDROMO, POIS PALÍNDROMO É UMA FRASE OU UMA PALAVRA QUE PODE SER LIDO INDIFERENTE
DA  ESQUERDA PARA A DIREITA OU VICE-VERSA 
*/

#include <stdio.h>
#include <string.h>
 
int main(){
    printf("OBS.: ROMA NAO E UM PALINDROMO, POIS PALINDROMO E UMA FRASE OU UMA PALAVRA QUE PODE SER LIDO INDIFERENTE DA  ESQUERDA PARA A DIREITA OU VICE-VERSA \n \n \n \n");
    char palavra[50], palavrainvertida[50];       
    int i=0, tamanho=0, tamanho2=0, teste=0;
 
    printf("\nPOR FAVOR, DIGITE UM PALAVRA: ");     
    gets(palavra);
    tamanho = strlen(palavra);
    tamanho=tamanho-1;

    while (tamanho>=0)
    {   
        palavrainvertida[i] = palavra[tamanho];
        i++;
        tamanho--;
    }
    palavrainvertida[i] = '\0';
    
    printf("\nPALAVRA QUE FOI DIGITADA INVERDITA: %s", palavrainvertida);

    for (i=0; palavra[i]!='\0'; i++){
        if (palavra[i] == palavrainvertida[tamanho2])
        {
            teste = teste+1;
        }
        tamanho2++;
    }

    tamanho=strlen(palavra);
    if(tamanho == teste){
        printf("\n\nESSA PALAVRA E UM PALINDROMO");
    } else{
        printf("\n\nESSA PALAVRA NAO E UM PALINDROMO");
    }
   
}
 
