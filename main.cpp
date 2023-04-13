#include <stdio.h>
#include "prototipi.h"
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(0));
	int const dim = 5;//dimensione dei due array minori;
	int const dim2 = 10; //dimensione dell'array finale;
	int arrayA[dim];
	int arrayB[dim];
	int arrayC[dim2]; //array finale
	//carico gli array;
	caricaArray(arrayA, dim);
	caricaArray(arrayB, dim);
	//visualizzo gli array pieni ma disordinati:
	printf("Visualizzo array disordinati:\n");
	visualizzaArray(arrayA, dim);
	visualizzaArray(arrayB, dim);
	//riordino gli array con il bubble sort:
	ordinaArray(arrayA, dim);
	ordinaArray(arrayB, dim);
	//visualizzo di nuovo gli array, ordinati:
	printf("Visualizzo gli array ordinati:\n");
	visualizzaArray(arrayA, dim);
	visualizzaArray(arrayB, dim);
	//unisco gli array A e B in maniera ordinata all'interno dell'array C:
	unisciArray(arrayA, arrayB, arrayC, dim, dim2);
	//visualizzo l'array C per verificare che tutto sia a posto:
	printf("visualizzo arrayC: \n\n");
	visualizzaArray(arrayC, dim2);







	return 0;
 }