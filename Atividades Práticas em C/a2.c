#include <stdio.h>

int main() {
    int pessoas;

    scanf("%d", &pessoas);

    float carne = pessoas * 0.3;
    float linguica = pessoas * 0.2;
    float frango = pessoas * 0.15;

    float custo_carne = carne * 50;
    float custo_linguica = linguica * 28;
    float custo_frango = frango * 22;

    float total = custo_carne + custo_linguica + custo_frango;
    float por_pessoa = total / pessoas;

    printf("Quantidades:\n");
    printf("Carne: %.1f kg - Linguiça: %.1f kg - Frango: %.1f kg\n\n", carne, linguica, frango);

    printf("Custo total:\n");
    printf("Carne: R$ %.2f - Linguiça: R$ %.2f - Frango: R$ %.2f\n", custo_carne, custo_linguica, custo_frango);

    printf("\nCusto total do churrasco: R$ %.2f\n", total);
    printf("Cada pessoa deve contribuir com: R$ %.2f\n", por_pessoa);

    return 0;
}