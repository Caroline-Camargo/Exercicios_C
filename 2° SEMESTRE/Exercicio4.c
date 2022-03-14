/*
    NOME: Caroline Souza Camargo
    MATRÍCULA: 21103073
    
    . Escreva um programa para ler uma temperatura em graus Celsius, calcular e escrever o valor
correspondente em graus Fahrenheit
*/

#include <stdio.h>
int main()
{
    float temperatura_fahrenheit;
    float temperatura_celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);
    temperatura_fahrenheit = (temperatura_celsius*1.8)+32;
    printf("Temperatura em fahrenheit: %f", temperatura_fahrenheit);
    return 0;
}

