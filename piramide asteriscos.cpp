#include <stdio.h>
 
 int main() { 
int linha;

 printf("digite a quantidade de linhas");
 scanf("%d", &linha);
 
 for(int qtd_linhas=0; qtd_linhas <= linha; qtd_linhas++) {        
    for(int espaço= qtd_linhas; espaço <= linha -1; espaço ++) {
     printf(" ");
    } 
 for(int asteriscos=1; asteriscos <= qtd_linhas+qtd_linhas-1; asteriscos++) {
    printf("*");
}
    printf("\n");
}


}
