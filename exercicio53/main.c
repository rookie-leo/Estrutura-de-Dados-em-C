/*59) Faça um programa que leia dois nomes, compare-os e imprima se são iguais ou 
diferentes. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char n1[30],n2[30];
	printf("Digite um nome ");
	gets(n1);
	printf("Digite um nome ");
	gets(n2);
	if (strcmp(n1,n2)==0){
		printf("Os nomes são iguais %s = %s",n1,n2);
	}
	else{
		printf("Os nomes não são iguais %s != %s",n1,n2);
	}
	getch();
	return 0;
}
/* Faça um programa que leia dois nomes, compare-os e imprima se são iguais ou diferentes.
(maiúscula ou minúscula).  
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <string.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char n1[30],n2[30];
	printf ("Digite um nome ");
	gets(n1);
	printf ("Digite um nome ");
	gets(n2);
	//if(strcmp(strupr(n1),strupr(n2))==0){ //maiúscula
	if(strcmp(strlwr(n1),strlwr(n2))==0){ // MINÚSCULA
		printf("Os nomes são iguais %s = %s",n1,n2);
	}
	else{
		printf("Os nomes são diferentes %s <> %s",n1,n2);
	}
	getch();
	return 0;
}*/

