#include<stdio.h>
#define TAM 10
int main(){
	
	int arranjo[TAM];
	int i = 0;
		
	for(i = 0; i < TAM; i++){
		printf("\nDigite um valor inteiro: ");
		scanf("%d", &arranjo[i]);
	}
	for(i = 0; i < TAM; i++){
		printf("[%d]: %d\n", i, arranjo[i]);
	}
	return 0;
}

