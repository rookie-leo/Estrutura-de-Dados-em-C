/*32)Fa�a um programa que armazene em um vetor a idade de 50 alunos de uma academia de gin�stica. O programa deve calcular e mostrar na tela:
"	A idade m�dia dos alunos;
"	A quantidade de alunos com idade acima da m�dia;
"	A quantidade de alunos com idade igual a m�dia;
"	A quantidade de alunos com idade abaixo da m�dia.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, v[i];
	float media=0, acima=0, abaixo=0, igual=0;
	for (i=0;i<10;i++){
		printf("Digite a idade ");
		scanf("%d",&v[i]);
		media=media+v[i];
	}
	media=media/10;
	printf("A idade m�dia dos alunos da academia � %.2f\n",media);
	for (i=0;i<10;i++){
		if(v[i]>media){
			acima++;
		}
		else
		if (v[i]==media){
			igual++;
		}
		else{
			abaixo++;
		}
	}
	printf("A quantidade de alunos acima da m�dia de idade da academia � %.2f.\n",acima);
	printf("A quantidade de alunos abaixo da m�dia de idade da academia � %.2f.\n",abaixo);
	printf("A quantidade de alunos igual da m�dia de idade da academia � %.2f.\n",igual);
	float 	
	getch();
	return 0;
}

