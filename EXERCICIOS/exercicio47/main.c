/*38) Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em
seguida o programa deve fazer a multiplicação do vetor pelas linhas da matriz. */
# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i,j;
	float v[3], m[3][3];
	printf("Informe os elementos do vetor\n");
	for(i=0;i<3;i++){
		printf("Digite um número ");
		scanf("%f",&v[i]);
	}
	printf("Informe os elementos do matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("Digite um número ");
		scanf("%f",&m[i][j]);
	}
}
	printf("\n\nO vetor é\n\n");
	for(i=0;i<3;i++){
		printf("%.1f\t",v[i]);
	}
	printf("\n\nA matriz é\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%.1f\t",m[i][j]);
	}
	printf("\n");
}
	printf("\n\nAs colunas da matriz multiplicadas pelo vetor\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m[i][j]=v[i]*m[i][j];
		printf("%.1f\t",m[i][j]);
	}
	printf("\n");
}
	return 0;
}

