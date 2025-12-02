#include <stdio.h>
#include "imposto-de-renda-em-c-function.c"

void main (){
    float renda;
    float cobranca;

    printf("Digite a sua renda");
    scanf("%f", &renda);   
    cobranca = imposto(renda);
    printf("%f", cobranca);
}