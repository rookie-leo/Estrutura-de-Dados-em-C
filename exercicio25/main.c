/* 29- O crit�rio de aprova��o em uma determinada escola para que um aluno seja promovido � a m�dia maior ou igual a 7 e ter no m�nimo 75% de frequ�ncia durante o ano. O c�lculo da m�dia final � feito a partir da m�dia aritm�tica entre quatro m�dias recebidas durante o ano. Fa�a um programa que receba as quatro notas e a quantidade de faltas de cada turma da escola (cada sala tem 40 alunos), sabendo que foram 200 dias letivos. Para cada aluno o programa    dever� calcular a m�dia final e avaliar a quantidade de faltas, informando se o aluno est� "Aprovado" ou "Reprovado por nota" ou "Reprovado por falta". */
# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float m1, m2, m3, m4, media, perf, qf;
	int  aluno=1;
	while (aluno<=4){
		printf("Digite a primeira m�dia ");
		scanf("%f",&m1);
		printf("Digite a segunda m�dia ");
		scanf("%f",&m2);
		printf("Digite a terceira m�dia ");
		scanf("%f",&m3);
		printf("Digite a quarta m�dia ");
		scanf("%f",&m4);
		printf("Digite a quantidade de faltas ");
		scanf("%f",&qf);
		perf=qf/200*100;
		media=(m1+m2+m3+m4)/4;
		if (qf>50){
			printf("Voc� est� reprovado por faltas, pois teve %.0f faltas ao ano que correspondem a %.2f porcento.\n\n",qf,perf);
		}
		else
		if (media>=7){
			printf("Voc� est� aprovado! Obteve m�dia final %.2f e %d faltas ao ano.\n\n",media,qf);
		}
		else{
			printf("Voc� est� reprovado! Obteve m�dia final %.2f e %d faltas ao ano.\n\n",media,qf);
		}
	}
	aluno++;
}

