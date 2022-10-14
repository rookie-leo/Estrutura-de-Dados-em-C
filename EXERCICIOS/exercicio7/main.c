/*11) Construa um algoritmo para calcular as ra�zes de uma equa��o do 2� grau (ax2 + bx + c) 
sendo que os valores a, b e c s�o fornecidos pelo usu�rio.

delta=b^2-4*a*c
x=(-b�raizq(delta))/(2*a)

Teste: a=1, b=-5, c=6, x1=2, x2=3
a=1; b=-4; c=4, x1=2, x2= 2
a=1; b= -2; c=4  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta, x1, x2;
	printf("Digite o valor de a ");
	scanf("%f",&a);
	printf("Digite o valor de b ");
	scanf("%f",&b);
	printf("Digite o valor de c ");
	scanf("%f",&c);
	delta=pow(b,2)-4*a*c;
	//pot�ncia=> usamos a fun��o pow(base,expoente) => dentro da biblioteca <math.h>
	x1=(-b-sqrt(delta))/2*a;
	//raiz quadrada => usamos a fun��o sqrt(vari�vel que quer extrair a raiz) => dentro da biblioteca <math.h>
	x2=(-b+sqrt(delta))/2*a;
	printf("As ra�zes da equa��o do 2� grau cujo delta=%.2f s�o x1=%.2f e x2=%.2f",delta,x1,x2);
	getch();
	return 0;
}

