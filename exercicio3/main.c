/*3)Faça um programa que calcule a velocidade média de um veículo.
vm=(sf-si)/(tf-ti) 

vm = velocidade média
sf = distância final
si = distância inicial
tf = tempo final
ti = tempo inicial */
# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float vm, sf, si, tf, ti;
printf("Digite a distância inicial ");
scanf("%f",&si);
printf("Digite a distância final ");
scanf("%f",&sf);
printf("Digite o tempo inicial ");
scanf("%f",&ti);
printf("Digite a tempo final ");
scanf("%f",&tf);
vm=(sf-si)/(tf-ti);
printf("A velocidade média é %.1f",vm);
	getch();
	return 0;
}

