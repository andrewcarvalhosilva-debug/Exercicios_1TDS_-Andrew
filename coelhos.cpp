#include <stdio.h>

int main() {
int geraçao;
int coelho=1;
int geraçao_escolhida;
int coelho_total=1;

 printf("digite o numero da geraçao:");
 scanf("%d" , &geraçao_escolhida);
 
 for(geraçao =1; geraçao <= geraçao_escolhida; geraçao++){
   printf("quantidade da geraçao:%d\nnumero de coelhos:%d\n\n", geraçao_escolhida , coelho_total);
   coelho=coelho *2;
   coelho_total = coelho +coelho -1;
 }
}
