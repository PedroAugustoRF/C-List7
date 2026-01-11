#include <stdio.h>
#include <time.h>
#define TAM 50

int main(){
	int arranjo[TAM];
	int i = 0;
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		arranjo[i] = (rand()%101);
	}
	for(i = 0; i < TAM; i++){
		printf("[%d]: %d\n", i, arranjo[i]);
	}
	return 0;
}

