/* 30-Calcular a média aritmética de 3 notas de 3 alunos. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	int aluno=0;
	do{
		printf("Digite a primeira nota ");
		scanf("%f",&n1);
		printf("Digite a segunda nota ");
		scanf("%f",&n2);
		printf("Digite a terceira nota ");
		scanf("%f",&n3);
		media=(n1+n2+n3)/3;
		printf("A média é %.2f\n",media);
		aluno++;
	}
	while (aluno<3);
	getch();
	return 0;
}

