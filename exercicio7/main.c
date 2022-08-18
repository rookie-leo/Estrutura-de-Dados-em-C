/*7)Construa um algoritmo para calcular as raízes de uma equação do 2º grau 
(ax2 + bx + c) sendo que os valores a, b e c são fornecidos pelo usuário.

delta=b^2-4*a*c
x=(-b±raizq(delta))/(2*a)
Teste: a=1, b=-5, c=6, x1=2, x2=3
a=1; b=-4; c=4, x1=2, x2= 2
a=1; b= -2; c=4 */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, delta, xp, xn;
	int const x1 = 2;
	int const x2 = 2;
	
	printf("Digite o valor da variavel a ");
	scanf("%f", & a);

	printf("Digite o valor da variavel b ");
	scanf("%f", & b);
	
	printf("Digite o valor da variavel c ");
	scanf("%f", & c);
	
	delta = pow(b, 2)	 - 4 * a * c;
	xp = (-b + sqrt(delta))/(2 * a);
	xn = (-b - sqrt(delta))/(2 * a);
	
	printf("")
	
	return 0;
}
