#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    int n[5][5] = {0};
    n[1][2] = 3; n[2][2] = 3; n[3][2] = 3;
    n[0][0] = 3; n[0][1] = 3; n[0][2] = 3;
    printf("Novato:\n");
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            if(n[i][j] == 3)
                printf("(%d,%d)\n", i, j);

    int a[10][10] = {0};
    a[1][1] = 3; a[2][2] = 3; a[3][3] = 3;
    a[0][0] = 3; a[0][1] = 3; a[0][2] = 3;
    a[5][0] = 3; a[5][1] = 3; a[5][2] = 3;
    a[7][2] = 3; a[6][3] = 3; a[5][4] = 3;
    printf("\nAventureiro:\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    int cone[3][5] = {{0,0,1,0,0},{0,1,1,1,0},{1,1,1,1,1}};
    int cruz[3][5] = {{0,0,1,0,0},{1,1,1,1,1},{0,0,1,0,0}};
    int oct[3][5] = {{0,0,1,0,0},{0,1,1,1,0},{0,0,1,0,0}};

    printf("\nMestre - Cone:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", cone[i][j]);
        printf("\n");
    }

    printf("\nMestre - Cruz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", cruz[i][j]);
        printf("\n");
    }

    printf("\nMestre - Octaedro:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++)
            printf("%d ", oct[i][j]);
        printf("\n");
    }

    return 0;
}
