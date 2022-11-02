# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <string.h>

#define MAX 7

void bsort (char *vet[ ], int qtd){
     int i, j;
     char *aux;
     for (i=1;i<qtd;i++){
          for (j=0;j<qtd-i;j++){
               if (strcmp(vet[j], vet[j + 1])>0) {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
          }
     }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;
    char *vet[MAX] = {"Miriam", "Sueli", "Ana", "Miguel", "Daniel", "Tales", "Humberto"};
   
	bsort(vet, MAX);
   
    for (i=0;i<MAX;i++) {
        printf("%s\n", vet[i]);
    }
  	getch();
	
    return 0;
}