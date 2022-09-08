#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 float c2=0, c4=0, c5=0, c7=0, c9=0, c11=0, c13=0;
 float total=0;
 char texto[5]="";


 do
 {
     strcpy(texto, "");
     printf("Entre com o valor correspondente a emissora, ou 'fim' para sair:\n\t1 - c2\n\t2 - c4\n\t3 - c5\n\t4 - c7\n\t5 - c9\n\t6 -c11\n\t7 -c13\n\t8 -   TV desligada\n");
     scanf("%s", texto);

     if (strcmp(texto,"1") == 0)
         c2++;
     else if (strcmp(texto,"2") == 0)
         c4++;
     else if (strcmp(texto,"3") == 0)
         c5++;
     else if (strcmp(texto,"4") == 0)
         c7++;
     else if (strcmp(texto,"5") == 0)
        c9++;
     else if (strcmp(texto,"6") == 0)
         c11++;
     else if (strcmp(texto,"7") == 0)
        c13++;
 }
 while(strcmp(texto,"fim") != 0);

 total = c2 + c4 + c5 + c7;

 printf("O total de audiencia foi:\n\tc2: %.1f%%\n\tc4: %.1f%%\n\tc5: %.1f%%\n\tc7: %.1f%%\n\tc9: %.1f%%\n\tc11: %.1f%%\n\tc12 %.1f%%\n\n: ", (c2/total)*100, (c4/total)*100, (c5/total)*100, (c7/total)*100, (c9/total)*100, (c11/total)*100, (c13/total)*100);

 system("pause");
}
