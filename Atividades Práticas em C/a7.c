#include <stdio.h>

int main() {
    char leitor[50];
    char livro[100];
    int paginas;
    int segundos_por_pagina;

    scanf("%s", leitor);
    scanf("%s", livro);
    scanf("%d", &paginas);
    scanf("%d", &segundos_por_pagina);

    float tempo_total = (paginas * segundos_por_pagina) / 3600.0;

    printf("%s, você finalizará a leitura do livro %s em aproximadamente %.2f horas.\n", leitor, livro, tempo_total);

    return 0;
}