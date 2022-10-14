/*34-Faça um programa que apresente um menu de opções conforme especificado abaixo, mostre na tela a opção escolhida, saindo apenas quando for digitado o número cinco. (Utilize: do...while)
Menu de opções
1.Incluir
2. Consultar
3. Alterar
4. Imprimir
5. Sair
Digite a opção:  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	do{
		printf("Menu de opções:1.Incluir\n2. Consultar\n3. Alterar\n4. Imprimir\n5. Sair\n");
		printf("Digite a opção desejada ");
		scanf("%d",&n);
		switch (n){
			case 1: printf("\nIncluir\n");
			break;
			case 2: printf("\nConsultar\n");
			break;
			case 3: printf("\nAlterar\n");
			break;
			case 4: printf("\nImprimir\n");
			break;
			case 5: printf("\nSair\n");
			break;
			default: printf("\nOpção inválida\n");
			}
	}
	while (n!=5);
	getch();
	return 0;
}

