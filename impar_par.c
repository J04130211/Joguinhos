#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    srand(time(NULL));
    int x, y, z = 1 + rand() % 10;
    
    printf("Ímpar(1) ou Par(2) ");
    scanf("%d", &x);
    
    while(x != 1 && x != 2){
        printf("Erro. Tente novamente.\n");
        printf("Ímpar(1) ou Par(2) ");
        scanf("%d", &x);
    }
    
    printf("Escolha o seu numero entre 0 e 10: ");
    scanf("%d", &y);
    
    while(y<0 || y>10){
        printf("Erro. Tente novamente.\n");
        printf("Escolha o seu numero entre 0 e 10: ");
        scanf("%d", &y);
    }
    
    int res = y + z;
    printf("Você escolheu %d e o computador escolheu %d, o resultado é: %d\n", y, z, res);
    
    if(x == 2){
        if(res % 2 == 0){
            printf("Você venceu!");
        }else{
            printf("Você perdeu!");
        }
    }else{
        if(res % 2 == 0){
            printf("Você perdeu!");
        }else{
            printf("Você venceu!");
        }
    }
    return 0;
}