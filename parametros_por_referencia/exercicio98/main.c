/*98) Faça um programa que contenha uma função que verifique se dois números inteiros,
 passados por referência, após somados resultará em um número par, retornando 1 se for
  verdadeiro e 0 se for falso.  */
# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int verificaNumero(int *x, int *y) {
    int r = *x + *y;
    if (r % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x, y, retorno;
    
    printf("Digite um número ");
	scanf("%f",&x);

    printf("Digite outro número ");
	scanf("%f",&x);

    retorno = verificaNumero(&x, &y);

    if (retorno % 2 == 0 ){
        printf("A soma dos valores digitados é par");
    } else {
        printf("A soma dos valores digitados é impar");
    }

}