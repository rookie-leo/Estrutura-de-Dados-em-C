/*96) Crie um procedimento que receba os dois números 2 e 110, passe por parâmetro 
de referência esses valores, calcule seu produto e imprima na tela seu resultado.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

void produto (int *a, int *b){
	printf ("O produto entre 2 e 110 é %d",*a* *b);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1=2, n2=110;
	produto (&n1,&n2);
	getch();
	return 0;
}
