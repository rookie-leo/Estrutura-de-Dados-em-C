/*103) Faça um programa que solicite ao usuário 5 números inteiros positivos e crie
 uma função que com passagem de parâmetro por referência para cada número informado
  e retorne a soma de seus divisores.   */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int somadiv (int *n){
	int i=1, soma=0;
	printf("Os divisores de %d são:\n",*n);
	while (i<=*n){
		if(*n%i==0){
			soma+=i;
			printf("%d\t",i);
		}
		i++;
	}
	return soma;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i;
	for (i=0;i<5;i++){
		printf("Digite um número inteiro ");
		scanf("%d",&num);
		printf("\nA soma dos divisores é %d\n\n",somadiv(&num));
	}
	getch();
	return 0;
}
