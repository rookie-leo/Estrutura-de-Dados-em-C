/*12)Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer do plano, 
P(x1,y1) e Q(x2,y2), calcule a distância entre eles.

Obs: d=raizq((x2-x1 )^2+(y2-y1)^2 )

Teste: x1=4; x2=7, y1=5, y2=9, saída final => d=5
 */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float x1, y1, x2, y2,distancia;
	
	printf("Digite o valor do ponto x1 ");
	scanf("%f", &x1);
	
	printf("Digite o valor do ponto x2 ");
	scanf("%f", &x2);

	printf("Digite o valor do ponto y1 ");
	scanf("%f", &y1);

	printf("Digite o valor do ponto y2 ");
	scanf("%f", &y2);
			
	distancia = sqrt(pow(x2-x1,2)+(pow(y2-y1,2)));
	
	printf("A distancia entre os pontos é %.2f", distancia);
	
	return 0;
}
