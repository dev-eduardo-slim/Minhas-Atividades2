#include <stdio.h>

int main() {
    int produtos[12] = {12, 23, 34, 45, 56, 67, 78, 89, 90, 101, 202, 303};
    int codigo;
    int i, posicao = -1;

    scanf("%d", &codigo);

    for (i = 0; i < 12; i++) {
        if (produtos[i] == codigo) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("encontrado na posicao: %d\n", posicao);
    } else {
        printf("nao encontrado\n");
    }

    return 0;
}
