/*101) Crie um procedimento para calcular a equação do 2º grau que receba o valor
 de delta como parâmetro por referência e determine se suas raízes são reais e
 diferentes, reais e iguais ou não possui raízes.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

float a, b, c, x1, x2;

void eq2grau (float *delta){
	x1=(-b-sqrt(*delta))/2*a;
	x2=(-b+sqrt(*delta))/2*a;
	if(*delta>0){
		printf("A equação possui duas raízes reais e diferentes sendo\n");
		printf("x1 = %.2f e x2 = %.2f",x1,x2);
	}
	else
	if(*delta==0){
		printf("A equação possui duas raízes reais e iguais sendo\n");
		printf("x1 = %.2f e x2 = %.2f",x1,x2);
	}
	else{
		printf("A equação não possui raízes reais.\n");
	}
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	float d; //d=delta
	printf("Digite o valor de a ");
	scanf("%f",&a);
	printf("Digite o valor de b ");
	scanf("%f",&b);
	printf("Digite o valor de c ");
	scanf("%f",&c);
	d=pow(b,2)-4*a*c;
	eq2grau(&d);
	getch();
	return 0;
}
