/*
    M�todo de Ordena��o de Dados - Selection Sort
*/

// Declara��o das Bibliotecas;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fSelect_Sort(int *pVetor); // Declara a fun��o select sort;

int main()
{
    int qt, TAM, i, contador, aux;

	printf("Escolha a quantidade de numeros:\n");
	printf("1 - 100\n");
	printf("2 - 1000\n");
	printf("3 - 10000\n");
	printf("4 - 100000\n");
	printf("5 - 1000000\n");
	
	scanf("%d", &qt);
	
	switch(qt){
		case 1:
			TAM = 100;
			break;
		case 2:
			TAM = 1000;
			break;
		case 3:
			TAM = 10000;
			break;
		case 4:
			TAM = 100000;
			break;
		case 5:
			TAM = 1000000;
			break;
		default:
			TAM = 100;
			break;
	}

	int numeros[TAM];
	clock_t begin,end;
	
	begin = clock();
	double time_spent;
	
	
	for( i = 0 ; i < TAM ; i++ ) {
		numeros[i] = rand() % TAM;
	}



    for (i = 1; i < TAM; i++) { 
        aux = numeros[i]; 
        int j = i - 1; 
        while (j >= 0 && numeros[j] > aux) { 
            numeros[j + 1] = numeros[j]; 
            j = j - 1; 
        } 
        numeros[j + 1] = aux; 
    } 
    
    end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Insertion demorou %.4f Segundos", time_spent);
    
//    for (i = 0; i < TAM; i++) {
//	 	printf("%d\n", numeros[i]);
//	}
}


