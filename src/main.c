#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10
#define N_MINES 3

int main() {
    srand(time(0));

    bool defeat = false;
    bool victory = false;
    int count_minas = 0;

    while(!defeat && !victory) {
        // desenha o mapa
        int count = 0;
        for(int i = 0; i < HEIGHT; i++) {
            for(int j = 0; j < WIDTH; j++) {
                bool mina = rand() % 50 == 0;
                if(mina && count_minas < N_MINES) {
                    printf("[XX]");
                    count_minas += 1;
                } else {
                    printf("[%02d]", count);
                }
                count += 1;
            }
            printf("\n");
        }
        defeat = true;
        victory = false;
    }

    if(victory) {
        printf("Você venceu! Parabéns!\n");
    } else if(defeat) {
        printf("Voce perdeu! (acertou uma mina)\n");
    }
    return 0;
}

