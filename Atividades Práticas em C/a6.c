#include <stdio.h>

int main() {
    char nome[50];
    float altura, peso, imc;

    scanf("%s", nome);
    scanf("%f", &altura);
    scanf("%f", &peso);

    imc = peso / (altura * altura); // elevado

    printf("%s, seu IMC é de %.4f\n", nome, imc);

    return 0;
}