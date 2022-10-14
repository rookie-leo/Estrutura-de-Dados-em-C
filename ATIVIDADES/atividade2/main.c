# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int main(void) {
  setlocale(LC_ALL, "PORTUGUESE");
  int vetor[20], l, soma=0;

 for(l=0; l<20; l++)
 {
 printf("Digite 20 valores?\n ");
 scanf("%d", &vetor[l]);

 }

  printf("\n%d\n%d", vetor[2], vetor[17]);
  soma = ((pow((vetor[0] - vetor[19]),2)) + (pow((vetor[1] - vetor[18]),2)) + (pow((vetor[2] - vetor[17]),2)) + (pow((vetor[3] - vetor[16]),2)) + (pow((vetor[4] - vetor[15]),2)) + (pow((vetor[5] - vetor[14]),2)) + (pow((vetor[6] - vetor[13]),2)) + (pow((vetor[7] - vetor[12]),2)) + (pow((vetor[8] - vetor[11]),2)) + (pow((vetor[9] - vetor[10]),2)) + (pow((vetor[10] - vetor[11]),2)));
 

 printf("\nA soma vale: %d", soma);

  getch();
  return 0;
  
}
