#include <stdio.h>

int main() {
    float valor_real, valor_dolar;

    scanf("%f", &valor_real);

    valor_dolar = valor_real / 5.42;

    printf("Valor em real R$ %.2f.\n", valor_real);
    printf("Valor em dólar $ %.2f.\n", valor_dolar);

    return 0;
}