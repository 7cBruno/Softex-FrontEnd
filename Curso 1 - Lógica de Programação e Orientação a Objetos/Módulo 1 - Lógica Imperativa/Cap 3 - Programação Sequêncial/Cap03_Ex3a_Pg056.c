#include <stdio.h>
/*
Entendimento: 
Converter de Celsius para Fahrenheit
Formula: Fhrenheit = (9 * Celsius + 160) / 5

Codificação Pseudocódigo

var
	C, F: real
inicio
	leia(C)
	F <- (9 * C + 160) / 5
	escreva(F)
fim
*/

int main() {
    float Celsius, Fahrenheit;
    printf("Escreva a temperatura em Celsius:\n");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius * 9 + 160) / 5;

    printf("O valor convertido é de %f \n", Fahrenheit);

    return 0;
}

