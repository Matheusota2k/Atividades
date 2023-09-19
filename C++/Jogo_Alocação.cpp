#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int nivel;
    printf("Escolha o nivel de dificuldade:\n");
    printf("1 - Facil (3 numeros)\n");
    printf("2 - Medio (5 numeros)\n");
    printf("3 - Dificil (10 numeros)\n");
    scanf("%d", &nivel);


    int tamanho;
    if (nivel == 1)
        tamanho = 3;
    else if (nivel == 2)
        tamanho = 5;
    else if (nivel == 3)
        tamanho = 10;
    else {
        printf("Nivel invalido. Saindo do jogo.\n");
        return 1;
    }

    int* vetor = (int*)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return 1;
    }

    printf("Numeros no vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100; // Gera os numeros aleatoriamente 
    }
    printf("\n");


    int palpite;
    printf("Adivinhe qual numero foi escolhido: ");
    scanf("%d", &palpite);

    int indiceSorteado = rand() % tamanho; 

    if (vetor[indiceSorteado] == palpite) {
    	
        printf("Parabens! Voce acertou o numero %d!\n", palpite);
    } else {
        printf("Voce errou. O numero escolhido foi %d.\n", vetor[indiceSorteado]);
    }

    free(vetor); // Libera a memória alocada para o vetor

    return 0;
}