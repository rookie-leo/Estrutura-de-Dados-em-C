/*3)Fa�a um programa que calcule a velocidade m�dia de um ve�culo.
vm=(sf-si)/(tf-ti) 

vm = velocidade m�dia
sf = dist�ncia final
si = dist�ncia inicial
tf = tempo final
ti = tempo inicial */
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float vm, sf, si, tf, ti;
printf("Digite a dist�ncia inicial ");
scanf("%f",&si);
printf("Digite a dist�ncia final ");
scanf("%f",&sf);
printf("Digite o tempo inicial ");
scanf("%f",&ti);
printf("Digite a tempo final ");
scanf("%f",&tf);
vm=(sf-si)/(tf-ti);
printf("A velocidade m�dia � %.1f",vm);
	getch();
	return 0;
}

