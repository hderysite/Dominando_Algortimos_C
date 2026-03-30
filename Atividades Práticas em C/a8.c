#include <stdio.h>

int main() {
    int p, m, g;
    float desconto;

    scanf("%d", &p);
    scanf("%d", &m);
    scanf("%d", &g);
    scanf("%f", &desconto);

    float preco_p = 13.50;
    float preco_m = 15.00;
    float preco_g = 17.50;

    float total = (p * preco_p) + (m * preco_m) + (g * preco_g); // sem desconto

    float valor_desconto = total * (desconto / 100); // com
    float total_final = total - valor_desconto;

    printf("Seu pedido foi registrado.\n\n");
    printf("- Açaí P: %d\n", p);
    printf("- Açaí M: %d\n", m);
    printf("- Açaí G: %d\n\n", g);

    printf("Desconto de %.0f%% aplicado.\n", desconto);
    printf("Total R$ %.2f\n", total_final);

    return 0;
}