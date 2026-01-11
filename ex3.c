#include <stdio.h>
#include <time.h>
#define TAM 50 

int main(){
	int arranjo[TAM];
	int i = 0;
	int ii = 0;
	srand(time(NULL));
	while(i < TAM){
		arranjo[i] = (rand()%201);
		i++;
	}
	while(ii < TAM){
		printf("[%d]: %d\n", ii, arranjo[ii]);
		ii++;
	}
	
	return 0;
}
