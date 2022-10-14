/*100)  Crie uma função que receba um número do tipo real como parâmetro por referência,
 calcule a sua raiz cúbica e retorne um  inteiro.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


# include <math.h>

float raizq (float *num){
	return cbrt(*num); //cbrt = raiz cúbica
	//float a=1;
	//a=a/3;
	//return (int)pow(*num,a);
	//return pow(*num,1.0/3);
	//return pow(*num,1.0/3.0);
	//return pow(*num,1/3.0);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n;
	printf("Digite um número ");
	scanf("%f",&n);
	printf("O valor da raiz quandrada de %.2f é %.2f",n,raizq(&n));
	getch();
	return 0;
}
