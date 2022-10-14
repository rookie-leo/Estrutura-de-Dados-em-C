/* 29- O critério de aprovação em uma determinada escola para que um aluno seja promovido é a média maior ou igual a 7 e ter no mínimo 75% de frequência durante o ano. O cálculo da média final é feito a partir da média aritmética entre quatro médias recebidas durante o ano. Faça um programa que receba as quatro notas e a quantidade de faltas de cada turma da escola (cada sala tem 40 alunos), sabendo que foram 200 dias letivos. Para cada aluno o programa    deverá calcular a média final e avaliar a quantidade de faltas, informando se o aluno está "Aprovado" ou "Reprovado por nota" ou "Reprovado por falta". */
# include <stdio.h>
# include <locale.h>
# include <stdlib.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	float m1, m2, m3, m4, media, perf, qf;
	int  aluno=1;
	while (aluno<=4){
		printf("Digite a primeira média ");
		scanf("%f",&m1);
		printf("Digite a segunda média ");
		scanf("%f",&m2);
		printf("Digite a terceira média ");
		scanf("%f",&m3);
		printf("Digite a quarta média ");
		scanf("%f",&m4);
		printf("Digite a quantidade de faltas ");
		scanf("%f",&qf);
		perf=qf/200*100;
		media=(m1+m2+m3+m4)/4;
		if (qf>50){
			printf("Você está reprovado por faltas, pois teve %.0f faltas ao ano que correspondem a %.2f porcento.\n\n",qf,perf);
		}
		else
		if (media>=7){
			printf("Você está aprovado! Obteve média final %.2f e %d faltas ao ano.\n\n",media,qf);
		}
		else{
			printf("Você está reprovado! Obteve média final %.2f e %d faltas ao ano.\n\n",media,qf);
		}
	}
	aluno++;
}

