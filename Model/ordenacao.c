#include<stdio.h>
#include<stdlib.h>
/*Autor: Ruben Alves do Nascimento
  Contato: rubenanapu@hotmail.com      
*/
main(){
       int a=-1,b,c,auxiliar,numeros[100];
       do{                            //Repeti��o para coletar os n�meros do usu�rio
       a++;
       printf("Digite o um numero ou 0 <zero> para sair : ");
       scanf("%i",&numeros[a]);
       system("cls");      
       }while(a<100&&numeros[a]!=0);
       printf("\n\t\t\tNUMEROS DESORDENADOS\n\n");
       for(b=0;b<a;b++)printf("%i ",numeros[b]);
       //At� agora apenas coletamos os numeros
       a--; /*a=a-1. OBS IMPORTANTE: essa vari�vel deve ser um valor a menos que a quantidade armazenada
       Agora ordenaremos os n�meros
       */
       for(b=0;b<a;b++)              //Utilizamos 2 for para isso
       for(c=0;c<a;c++)
       if(numeros[c]>numeros[c+1]){
       auxiliar=numeros[c];        //As posi��es devem ser a vari�vel do �ltimo for
       numeros[c]=numeros[c+1];
       numeros[c+1]=auxiliar;
       }//N�meros j� ordenados
      
       printf("\n\t\t\tNUMEROS ORDENADOS\n\n");   //Imprimindo os n�meros em ordem
       for(b=0;b<=a;b++)printf("%i ",numeros[b]);      
      
       printf("\n\n");
system("pause");
}
//Fim do programa
