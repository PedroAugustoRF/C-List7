#include<stdio.h>
#include <time.h>
#define TAM 100
int main(){
	
	int arranjo[TAM];
	int i = 0, ii = 0, somaPar = 0, somaImpar = 0;
	srand(time(NULL));
	for(i = 0; i < TAM; i++){
		arranjo[i] = (rand()%1000+1);
	}
	
	for(ii = 0; ii < TAM; ii++){
		if(arranjo[ii]%2 == 0){
			somaPar++;
		}
		else{
			somaImpar++;
		}
	}
	
	printf("Dentre esses 100 valores aleatorios, %d sao pares e %d sao impares", somaPar, somaImpar);
	
	return 0;
}
