/* NOME: Caroline Souza Camargo

7. Faça um programa que leia 10 números, considere que serão lidos números
inteiros e positivos. Se o número lido for menor que 7, calcule o seu fatorial. Se
for maior ou igual a 7, calcule a soma de 1 até o número lido */

#include <stdio.h>
 int main (){
     
    int num, i=1, i2=1, i3=1, soma=0, fatorial;
    while (i<=10)
    {
        printf ("\nDigite o numero %d:  ", i);
        scanf ("%d", &num);
        if (num<7)
        {
            fatorial=num;
            while (i3 < num)
            {   
                fatorial = fatorial * i3;
                i3++;
            }
            printf ("\nFatorial do numero lido %d", fatorial);
        } else {
            while (i2<=num)
            {   
                soma=soma+i2;
                i2++;
            }
            printf ("\nSoma de 1 ate o numero lido %d", soma);
        }
        
        i++;
    }
    
   
    
 }