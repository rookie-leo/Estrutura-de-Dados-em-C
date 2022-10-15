/*102) Crie um programa que solicite 10 números inteiros ao usuário e imprima para
 cada um o seu correspondente módulo. Para obter o valor do módulo do número utilize
  a função com retorno e com passagem de parâmetro por referência.  */

#include <stdio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int calculaModulo(int *num) {
    if (*num > 0) {
        return *num * 1;
    } else {
        return *num * (-1);
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int *nums[10], i;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero ");
        scanf("%d", &nums[i]);
        printf("\n");
    }

    for (i = 0; i < 10; i++) {
        printf("O modulo de %d eh %d\n", nums[i], calculaModulo(&nums[i]));
    }
}