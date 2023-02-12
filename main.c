/*
 * main.c
 * Resposta do exercício 3 do capítulo 3.
 * Author: Thiago Leite
 */

#define TAMANHO 10
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int inteiros[TAMANHO];

	inteiros[0] = 25;
	inteiros[1] = 31;
	inteiros[2] = 79;
	inteiros[3] = 47;
	inteiros[4] = 11;
	inteiros[5] = 92;
	inteiros[6] = 63;
	inteiros[7] = 58;
	inteiros[8] = 9;
	inteiros[9] = 100;

	int numero;
	printf("Digite um número:");
	scanf("%d", &numero);

	int i;
	int posicao = 0;
	for (i = 0; i < TAMANHO; i++) {

		if (numero == inteiros[i]) {

			printf("O número %d está na posição %d(índice %d) do vetor.",
					inteiros[i], posicao + 1, i);
			break;
		}
		++posicao;
	}


	if (posicao == 10) {
		printf("O número %d não pertence ao vetor.", numero);
	}

}
