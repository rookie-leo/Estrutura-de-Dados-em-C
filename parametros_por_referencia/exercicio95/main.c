/*95) Crie uma função que receba os dois números 2 e 110, passe por parâmetro de referência
 esses valores e retorne o produto entre eles para o programa principal.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int produto (int *x, int *y){
	return(*x * *y);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1=2, n2=110;
	printf("O produto entre 2 e 110 é %d",produto(&n1,&n2));
	getch();
	return 0;
}
