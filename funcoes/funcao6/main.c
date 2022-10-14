/* 94) Faça um programa que solicite ao usuário 5 números inteiros positivos, 
crie um função (procedimento) que com passagem de parâmetro por valor para cada número informado
 e imprima a soma de seus divisores.  */

 # include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int divisores(int num){
	int i=1, soma=0;
	printf("Os divisores de %d são ",num);
	while (i<=num){
		if(num%i==0){
			soma+=i;
			printf("%d\t",i);
		}
		i++;
	}
	return soma;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i;
	for (i=0;i<5;i++){
		printf("Digite um número ");
		scanf("%d",&n);
		printf("\nA soma dos divisores é %d\n\n",divisores(n));
	}
	getch();
	return 0;
}
