/*26-	Calcular a média aritmética de 3 notas de 3 alunos. (Utilize: while)   */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	int aluno=0;
	while(aluno<3){
		printf("Digite a primeira nota ");
		scanf("%f",&n1);
		printf("Digite a segunda nota ");
		scanf("%f",&n2);
		printf("Digite a terceira nota ");
		scanf("%f",&n3);
		media=(n1+n2+n3)/3;
		printf("Sua média é %.2f\n",media);
		if (media>=6){
			printf("Você está aprovado!!!\n\n");
		}
		else{
			printf("Você está reprovado!!!\n\n");
		}
		aluno++;
	}
	getch();
	return 0;
}

