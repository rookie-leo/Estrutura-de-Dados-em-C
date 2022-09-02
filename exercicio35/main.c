/*39-Faça um programa que receba 10 valores aleatórios do tipo inteiro. O programa deve verificar e mostrar na tela: (Utilize: for)
"	O total de números que estão entre 15 e 35.
"	O total de números que estão fora do intervalo acima.  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int cont, n, t1=0, t2=0;
	
	for (cont = 0; cont < 10; cont++) {
		printf("Digite um número ");
		scanf("%d", &n);
		
		if (n>=15 && n<=35) {
			t1++;
		} else {
			t2++;
		}
		
	}
		printf("O total de números digitados no intervalo de 15 a 35 é %d\n", t1);
		printf("E o total de número digitados fora desse intervalo é %d", t2);
	
	return 0;
}
