/*54) Criar um algoritmo que leia os elementos de uma matriz inteira de 4 x 4 e imprimir os elementos da diagonal principal.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, m[4][4];
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite um n�mero inteiro ");
			scanf("%d",&m[i][j]);
		}
	}
	printf("\n\nA matriz �\n\n");
	for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d\t",m[i][j]);
		}
		printf("\n\n");
	}
	printf("\n\nA diagonal principal �\n\n");
		for (i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i==j){
			printf("%d",m[i][j]);
		}
		printf("\t");
	}
		printf("\n\n");
}
	getch();
	return 0;
}

