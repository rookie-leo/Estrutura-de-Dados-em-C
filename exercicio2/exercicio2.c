/*2)Fa�a um programa que leia dois n�meros inteiros e exiba o resto da divis�o
 do primeiro pelo segundo. */

/*#include <stdio.h>
#include <locale.h>

void main() {
  setlocale('LC_All', "Portuguese");

  int num1, num2, result;

  printf("Digite o primeiro n�mero ");
  scanf("%s", & num1);

  printf("Digite o segundo n�mero ");
  scanf("%s", & num2);

  result = num1 % num2;
  
  printf("O resto da divis�o entre o n�mero %s e n�mero %s � ", num1, num2, result);
}*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n1, n2, resto;
printf("Digite o primeiro n�mero inteiro ");
scanf("%d",&n1);
printf("Digite o segundo n�mero inteiro ");
scanf("%d",&n2);
resto=n1%n2;
printf("O resto da divis�o de %d por %d � %d",n1,n2,resto);
	getch();
	return 0;
}

