/*59) Fa�a um programa que leia dois nomes, compare-os e imprima se s�o iguais ou 
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
		printf("Os nomes s�o iguais %s = %s",n1,n2);
	}
	else{
		printf("Os nomes n�o s�o iguais %s != %s",n1,n2);
	}
	getch();
	return 0;
}
/* Fa�a um programa que leia dois nomes, compare-os e imprima se s�o iguais ou diferentes.
(mai�scula ou min�scula).  
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
	//if(strcmp(strupr(n1),strupr(n2))==0){ //mai�scula
	if(strcmp(strlwr(n1),strlwr(n2))==0){ // MIN�SCULA
		printf("Os nomes s�o iguais %s = %s",n1,n2);
	}
	else{
		printf("Os nomes s�o diferentes %s <> %s",n1,n2);
	}
	getch();
	return 0;
}*/

