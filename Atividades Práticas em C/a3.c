#include <stdio.h>

int main() {
    char nome_aluno[50];
    float n1, n2, n3, media;

    scanf("%s", nome_aluno);
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("O(A) estudante %s ficou com média %.1f\n", nome_aluno, media);

    return 0;
}