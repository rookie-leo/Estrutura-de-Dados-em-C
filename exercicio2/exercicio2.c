/*2)Faça um programa que leia dois números inteiros e exiba o resto da divisão
 do primeiro pelo segundo. */

/*#include <stdio.h>
#include <locale.h>

void main() {
  setlocale('LC_All', "Portuguese");

  int num1, num2, result;

  printf("Digite o primeiro número ");
  scanf("%s", & num1);

  printf("Digite o segundo número ");
  scanf("%s", & num2);

  result = num1 % num2;
  
  printf("O resto da divisão entre o número %s e número %s é ", num1, num2, result);
}*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n1, n2, resto;
printf("Digite o primeiro número inteiro ");
scanf("%d",&n1);
printf("Digite o segundo número inteiro ");
scanf("%d",&n2);
resto=n1%n2;
printf("O resto da divisão de %d por %d é %d",n1,n2,resto);
	getch();
	return 0;
}

