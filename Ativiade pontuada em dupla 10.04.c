#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#include <locale.h>
#define A_DISCIPLINAS 3
#define B_NOTAS 3
void cabecalho(){
system("cls || clear");	
printf("------SENAI DENDEZEIROS--------");
fflush(stdin);
}
int main() {
	setlocale(LC_ALL, "");
	
float notas[A_DISCIPLINAS][B_NOTAS], soma[A_DISCIPLINAS][B_NOTAS], media[A_DISCIPLINAS], peso[B_NOTAS]={3,3,4};
char disciplina[A_DISCIPLINAS][200];
int i,j;

// Solicitação dos nomes das disciplinas
cabecalho();
for (i=0; i<A_DISCIPLINAS; i++){
	printf("\nDigite o nome da %iª disciplina: ", i+1);
	scanf("%s", &disciplina[i]);
	
// Solicitação das notas para cada disciplina
     
	for (j=0; j<B_NOTAS; j++){
		do{
		printf("Digite a %iª nota: ", j+1);
		scanf("%f", &notas[i][j]);
		soma[i][j]=notas[i][j]*peso[j];
		}while (notas[i][j]<0 || notas[i][j]>10);
	}

}

 // Cálculo das médias ponderadas para cada disciplina
    for (i = 0; i < A_DISCIPLINAS; i++) {
        for (j = 0; j < B_NOTAS; j++) {
        	
            media[i] = media[i]+soma[i][j];
        }
	}

// Exibição das médias ponderadas para cada disciplina
    cabecalho();
    printf("\nMédias ponderadas das disciplinas:\n");
    for (i = 0; i < A_DISCIPLINAS; i++) {
        printf("%s: %.2f\n", disciplina[i], media[i]/10);
    }

    return 0;
}
