/*  NOME: Caroline Souza Camargo
    CURSO: Ciências da Computação
    MATRICULA: 21103073
    DISCIPLINA: Algorítimos e Computação

3. Um	 pesquisador	 está	 investigando	 sobre	 mudanças	 climáticas	 e	 precisa	 calcular	 
a	 média de	temperatura	e	pressão	atmosférica	de	um	mês	de	dados.	Escreva	um	programa que leia
30 valores	que	representem	dados	de	temperatura	e	pressão	atmosférica	diários	medidos. Escreva as	
médias	de	temperatura	e	pressão	atmosférica	deste mês e	a temperatura do dia mais quente.  */

#include <stdio.h>
 int main (){

    float temperatura, pressao, maisquente=-273.15, mediatemperatura=0, mediapressao=0;
    int i=1, dia;
     
    while (i<=30)
    {
        printf("\nDigite a temperatura registrada no dia %i:   ", i);
        scanf ("%f", &temperatura);
        printf("\nDigite a pressao registrada no dia %i:   ", i);
        scanf ("%f", &pressao);

        if(temperatura>maisquente){
            maisquente=temperatura;
            dia=i;
        }

        mediatemperatura = mediatemperatura + temperatura;
        mediapressao = mediapressao + pressao;

        i++;
    }
    
    i=i-1;
    mediapressao = mediapressao / i;
    mediatemperatura = mediatemperatura / i;

    printf("\nA Media da temperatura em %i dias foi de %.3f grau celcius", i, mediatemperatura);
    printf("\nA Media da pressao em %i dias foi de %.3f atm", i, mediapressao);
    printf("\nA temperatura do dia mais quente foi no dia %i, atingindo uma temperatura de %.3f grau celcius", dia, maisquente);
 }