/*35-	Calcular a m�dia aritm�tica de 3 notas de 3 alunos. D� a sa�da de aluno aprovado ou reprovado. 
OBS: media >=6 aprovado */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, media;
	int aluno;
	for(aluno=0;aluno<3;aluno++){
		printf("Digite a primeira nota ");
		scanf("%f",&n1);
		printf("Digite a segunda nota ");
		scanf("%f",&n2);
		printf("Digite a terceira nota ");
		scanf("%f",&n3);
		media=(n1+n2+n3)/3;
		printf("A m�dia � %.2f\n",media);
		if(media>=6){
			printf("Voc� est� aprovado!\n\n");
		}
		else{
				printf("Voc� est� reprovado!\n\n");
		}
}
	getch();
	return 0;
}

