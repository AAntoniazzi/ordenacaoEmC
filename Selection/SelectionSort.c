#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void select_sort(int *pVetor);

int main()
	{
		int TAM, qt, i, aux;
	    int vVetor[TAM];
 	  	int vAux;
  	    clock_t begin, end;
	    double time_spent;

	
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
	
	for( i = 0 ; i < TAM ; i++ ) {
		numeros[i] = rand() % TAM;
	}
	
	int j, n, temp;  
    
    for (i = 0; i < TAM-1; i++)  {  
        aux = i;  
        for (j = i+1; j < n; j++)  {
        	if (numeros[j] < numeros[aux]){
           	aux = j; 
        	temp = numeros[aux];
			numeros[aux] = numeros[i];
			numeros[i] = temp;
		   } 
		}
   }  
   
    end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Selection Sort demorou %.4f Segundos", time_spent);

	return 0;

}
