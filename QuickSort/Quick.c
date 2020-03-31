#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void Quick(int vetor[10], int inicio, int fim);
int main(){
	
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

	int max;
	
	for( i = 0 ; i < TAM ; i++ ) {
		numeros[i] = rand() % TAM;
		max = i;
	}
   
   Quick(numeros, 0, max);
   
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("QuickSort demorou %.4f Segundos", time_spent);
	
	//for (i = 0; i < TAM; i++) {
	// 	printf("%d\n", numeros[i]);
	//}
	
	return 0;
      
}

void Quick(int vetor[], int inicio, int final){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = final;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo){
      	i = i + 1;
	  } 
      while (vetor[j] > pivo){
      	j = j - 1;
	  } 
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j){
   	Quick(vetor, inicio, j);
   } 
   if(i < final){
   	Quick(vetor, i, final);  
   }  
}
