/*39-Fa�a um programa que receba 10 valores aleat�rios do tipo inteiro. O programa deve verificar e mostrar na tela: (Utilize: for)
"	O total de n�meros que est�o entre 15 e 35.
"	O total de n�meros que est�o fora do intervalo acima.  */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int cont, n, t1=0, t2=0;
	
	for (cont = 0; cont < 10; cont++) {
		printf("Digite um n�mero ");
		scanf("%d", &n);
		
		if (n>=15 && n<=35) {
			t1++;
		} else {
			t2++;
		}
		
	}
		printf("O total de n�meros digitados no intervalo de 15 a 35 � %d\n", t1);
		printf("E o total de n�mero digitados fora desse intervalo � %d", t2);
	
	return 0;
}
