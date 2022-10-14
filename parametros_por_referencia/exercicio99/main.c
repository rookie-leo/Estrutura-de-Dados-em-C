/*99) Crie uma função que receba um número do tipo real como parâmetro por referência
 e calcule a sua raiz quadrada como retorno.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

float calculaRaizQuadrada(float *x) {
    return sqrt(*x);
}

void main() {
    setlocale(LC_ALL, "Portuguese");
    float x;

    printf("Digite um número ");
	scanf("%f",&x);

    float r = calculaRaizQuadrada(&x);

    printf("A raiz quadrada do valor eh %f", r);

}