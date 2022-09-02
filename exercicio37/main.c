/*41)Faça um programa que leia uma sequência de 5 números e exiba-os em ordem inversa de digitação.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float v[5];
	int i;
	for (i=0;i<5;i++){
		printf("Digite um número ");
		scanf("%f",&v[i]);
	}
	printf("\n\nVetor com os números exibidos em ordem inversa de digitação\n\n");
	for(i=4;i>=0;i--){
		printf("%.1f\t",v[i]);
	}
	getch();
	return 0;
}

