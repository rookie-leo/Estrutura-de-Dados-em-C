/*AULA 8: 
MATRIZES 35) Faça um programa que receba 15 dados do tipo inteiro e armazene em uma matriz 5x3. A seguir, copie os valores desta matriz para outra, invertendo linhas e colunas.*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, m[5][3], n[3][5];
	for (i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("Digite um número inteiro ");
			scanf("%d",&m[i][j]);
		}
	}
	printf("\n\nA matriz é\n\n");
		for (i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n\n");
	}
	for (i=0;i<3;i++){
		for(j=0;j<5;j++){
			n[i][j]=m[j][i];
		}
	}
	printf("\n\nA matriz transposta é \n\n");
		for (i=0;i<3;i++){
			for(j=0;j<5;j++){
				printf("%d\t",n[i][j]);
			}
		printf("\n\n");
		}
	getch();
	return 0;
}

