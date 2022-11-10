# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define MAX 10
# define N 10

void ssort(char *nome[], double ra[], int qtd) { 
     int i, min, j;
	 double aux;
	 char *auxNome;
	 
     for (i=0;i<(qtd-1);i++){
          min=i;
          for(j=(i+1);j<qtd;j++){
               if (ra[j]>ra[min]){
                    min=j;
}
          }
          if(i!=min){
               aux=ra[i];
               ra[i]=ra[min];
               ra[min]=aux;
               char *auxNome= nome[min];
               nome[min] = nome[i];
               nome[i] = auxNome;
          }
     }
}

void bsort(char *nome[], double ra[], int qtd){

    int i, j;
    double aux;
    char *auxNome;

     for (i=1;i<qtd;i++){

          for (j=0;j<qtd-i;j++){

               if (ra[j]<ra[j+1]){

                    aux=ra[j];

                    ra[j]=ra[j+1];

                    ra[j+1]=aux;
			
                    auxNome = nome[j];
                    nome[j]=nome[j+1];
                    nome[j + 1] = auxNome;
               }
          }
     }
}

	int main(){
    setlocale(LC_ALL, "Portuguese");

    double vet[MAX] = {96712084132, 91897425381, 99764893473, 967189238741, 913697854202, 967113256987, 954236987123, 977896354102, 992365897412, 95236478314};
	char *nome[N] = {"Julio", "Marcos", "Flavio", "Laura", "Rosana", "Carlos", "Jonas", "Janete", "Roberto", "Maria"};	
    int i, x;
    
    
    printf("Escolha qual o método de ordenação:  1 - Bsort ou 2 - Ssort: \n ");
    scanf("%i", &x);
    
    if(x==1){
    	bsort (nome, vet ,MAX);
    	
     for(i=0;i<MAX;i++){
          printf("%.0lf - %s  \n\n",vet[i],nome[i]);
          }
	}
	
	else if(x==2){
		ssort(nome, vet, MAX);
		
	for(i=0;i<MAX;i++){
          printf("%.0lf - %s  \n\n",vet[i],nome[i]);
	}
		
	}else{
		printf("Opção digitada invalida");
	}
	
	getch();
	return 0;
}