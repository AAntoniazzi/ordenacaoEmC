#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

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


// Algoritmo de ordenação Bubblesort:
 for (contador = 1; contador < TAM; contador++) {
   for (i = 0; i < TAM - 1; i++) {
     if (numeros[i] > numeros[i + 1]) {
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }
 
 
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("Bubble demorou %.4f Segundos", time_spent);

//for (i = 0; i < TAM; i++) {
// 	printf("%d\n", numeros[i]);
//}

return 0;
}
