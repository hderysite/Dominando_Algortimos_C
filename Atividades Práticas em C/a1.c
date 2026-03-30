#include <stdio.h>

int main() {
    char nome[50];
    char curso[50];
    char hobby[50];
    int semestre;

    scanf("%s", nome);
    scanf("%s", curso);
    scanf("%d", &semestre);
    scanf("%s", hobby);

    printf("Prazer, eu sou o(a) %s!\n", nome);
    printf("Atualmente estou no %dº semestre de %s e meu hobby favorito é %s.\n",
           semestre, curso, hobby);

    return 0;
}