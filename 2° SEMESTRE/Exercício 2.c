/*
    NOME: Caroline Souza Camargo
    MATRÍCULA: 21103073
    
    Escreva um programa para ler o salário mensal e o percentual de reajuste. Calcular e
escrever o valor do novo salário.
*/

#include <stdio.h>
int main()
{
    float salario, reajuste;
    printf ("Digite o seu salario mensal e o porcentual de reajuste: \n");
    scanf ("%f%f",&salario, &reajuste);
    printf ("Seu novo salario: %.2f", salario+(salario*reajuste));
    return 0;
}
