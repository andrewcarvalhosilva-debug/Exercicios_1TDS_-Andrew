#include <stdio.h>

int main() {
    int linhas, i, j;
    int num = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);

    for (i = 1; i <= linhas; i++) {
        for (j = 1; j <=i; j++) {
            printf("%3d ", num);
            num++;
        }
        printf("\n");
    }
    
}
