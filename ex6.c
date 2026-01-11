#include <stdio.h>
#include <stdbool.h>
#define ALUNOS 5

int main(){
	float arranjoNotas[ALUNOS];
	float nota = 0.0, somaNotas = 0.0, maiorNota = 0.0, menorNota = 0.0 ;
	int i = 0, n = 0, casos = 0, editar = 0, notaInformada = 0;
	bool notaInvalida = false;

	for(i = 0; i < ALUNOS; i++){
		do{
			notaInvalida = false;
			printf("Digite a nota do aluno:\n");
			scanf("%f", &nota);

			if(nota < 0 || nota > 10){
				printf("Nota invalida!\n");
				notaInvalida = true;
			}
			else{
                arranjoNotas[i] = nota;
			}
		}while(notaInvalida);
	}

	do{
        printf("(1)Imprimir todas as notas digitadas para conferencia\n");
        printf("(2)Calcular e imprimir a media da turma\n");
        printf("(3)Alterar uma nota\n");
        printf("(4)Imprimir a maior nota da turma\n");
        printf("(5)Imprimir a menor nota da turma\n");
        printf("(6)Imprimir as notas acima de uma nota informada\n");
        printf("(7)Imprimir as notas abaixo de uma nota informada\n");
        printf("(0)Encerrar o programa\n");
        printf("Opcao:\n");
        scanf("%d", &casos);

        switch(casos){
            case 1:
                for(i = 0; i < ALUNOS; i++){
                    printf("[Nota Aluno %d]: %.2f\n\n", n+=1, arranjoNotas[i]);
                }
                break;

            case 2:
                for(i = 0; i < ALUNOS; i++){
                    somaNotas += arranjoNotas[i];
                }
                somaNotas = somaNotas / ALUNOS;
                printf("\nA media da turma foi: %.2f\n\n\n", somaNotas);
                break;

            case 3:
                do{
                    printf("Deseja editar alguma nota? Caso sim, digite o numero da nota que aparece em [Nota Aluno: ]\n");
                    printf("Essa é a lista de notas: \n");

                    for(i = 0; i < ALUNOS; i++){
                        printf("[Nota Aluno %d]: %.2f\n\n", n+=1, arranjoNotas[i]);
                    }

                    printf("\nE para parar de editar notas, digite '-1'\n");
                    scanf("%d", &editar);

                    if(editar == -1){
                        printf("Edicao encerrada!\n\n\n");
                    }
                    else{
                        printf("Digite a nota nova: \n");
                        scanf("%f", &nota);

                        if(nota < 0 || nota > 10){
                            printf("Nota invalida!\n");
                            notaInvalida = true;
                        }
                        else{
                            arranjoNotas[editar] = nota;
                            printf("A nova nota e: [Nota Aluno %d]: %.2f\n", editar, arranjoNotas[editar]);
                        }
                    }
                }while(editar != -1);
                break;

            case 4:
                maiorNota = arranjoNotas[0];

                for(i = 0; i < ALUNOS; i++){
                    if(arranjoNotas[i] > maiorNota){
                        maiorNota = arranjoNotas[i];
                   }
                }
                printf("\nA maior nota foi: %.2f\n\n\n", maiorNota);
                break;

            case 5:
                menorNota = arranjoNotas[0];
                for(i = 0; i < ALUNOS; i++){
                    if(arranjoNotas[i] < menorNota){
                        menorNota = arranjoNotas[i];
                    }
                }
                printf("\nA menor nota foi: %.2f\n\n\n", menorNota);
                break;

            case 6:
                printf("Digite o valor correspondente a [Nota Aluno] que voce quer imprimir as notas acima de uma nota informada: \n");
                scanf("%d", &notaInformada);

                do{
                    i = notaInformada - 1;
                    printf("[Nota Aluno %d]: %.2f\n\n", notaInformada--, arranjoNotas[i]);
                    i--;
                }while(i != -1);
                break;

            case 7:
                printf("Digite o valor correspondente a [Nota Aluno] que voce quer imprimir as notas abaixo de uma nota informada: \n");
                scanf("%d", &notaInformada);

                for(i = notaInformada - 1; i < ALUNOS; i++){
                    printf("[Nota Aluno %d]: %.2f\n\n", notaInformada++, arranjoNotas[i]);
                }
                break;

            case 0:
                printf("Programa encerrado\n");
                casos = 0;
                break;

            default:
                printf("Digite um valor valido\n");
                break;
        }
	}while(casos != 0);
	return 0;
}
