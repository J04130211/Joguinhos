#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    srand(time(NULL));
    int r1, r2 = 1 + rand() % 3;
    
    printf("Jo...\n");
    sleep(1);
    printf("Ken...\n");
    sleep(1);
    printf("Po!\n");
    
    printf("Qual é a sua jogada: 1- Pedra 2- Papel 3- Tesoura: ");
    scanf("%d", &r1);
    printf("\n");
    
    
    while(r1 > 3 || r1 < 1){
        printf("Erro. Tente novamente.\n");
        printf("Jo...\n");
        sleep(1);
        printf("Ken...\n");
        sleep(1);
        printf("Po!\n");
        
        printf("Qual é a sua jogada: 1- Pedra 2- Papel 3- Tesoura: ");
        scanf("%d", &r1);
        printf("\n");
    }
    if(r1 == 1 && r2 == 1){
        printf("Você jogou Pedra.\n");
        printf("O computador jogou Pedra.\n");
        printf("Empate.");
    }else{
        if(r1 == 1 && r2 == 2){
            printf("Você jogou Pedra.\n");
            printf("O computador jogou Papel.\n");
            printf("Derrota.");
        }else{
            if(r1 == 1 && r2 == 3){
                printf("Você jogou Pedra.\n");
                printf("O computador jogou Tesoura.\n");
                printf("Vitória.");
            }else{
                if(r1 == 2 && r2 == 1){
                    printf("Você jogou Papel.\n");
                    printf("O computador jogou Pedra.\n");
                    printf("Vitória.");
                }else{
                    if(r1 == 2 && r2 == 2){
                        printf("Você jogou Papel.\n");
                        printf("O computador jogou Papel.\n");
                        printf("Empate.");
                        
                    }else{
                        if(r1 == 2 && r2 == 3){
                            printf("Você jogou Papel.\n");
                            printf("O computador jogou Tesoura.\n");
                            printf("Derrota.");
                        }else{
                            if(r1 == 3 && r2 == 1){
                                printf("Você jogou Tesoura.\n");
                                printf("O computador jogou Pedra.\n");
                                printf("Derrota.");
                            }else{
                                if(r1 == 3 && r2 == 2){
                                    printf("Você jogou Tesoura.\n");
                                    printf("O computador jogou Papel.\n");
                                    printf("Vitória.");
                                }else{
                                    printf("Você jogou Tesoura.\n");
                                    printf("O computador jogou Tesoura.\n");
                                    printf("Empate.");
                                }
                            }
                    }
                }
            }
        }
    }
}

    return 0;
}