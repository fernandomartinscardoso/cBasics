#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //Variaveis
    int n, cont;
    
    //Entrada de dados
    printf("Entre com um numero:");
    scanf("%d", &n);
    
    //Processamento
    for(cont=0; cont<=n; cont++){
                printf("\n%d", cont);
    }          
    
    printf("\nTodos os numeros ja foram impressos");
    
    //Final de C�digo
    fflush (stdin);
    getch();
    return 0;    
}
