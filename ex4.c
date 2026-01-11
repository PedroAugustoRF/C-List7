#include<stdio.h>
#include <time.h>
#define TAM 50
int main(){
	int arranjo[TAM];
	int i = 0, ii = 0;
	srand(time(NULL));
	do{
		arranjo[i] = (rand()%501+100);
		i++;
	}while(i < TAM);
	
	do{
		printf("[%d]: %d\n", ii, arranjo[ii]);
		ii++;
	}while(ii < TAM);
	return 0;
}

