#include <stdio.h>
#include "prototipi.h"
#include <stdlib.h>
#include <time.h>

void caricaArray(int array[], int dim) {
	for (int i = 0; i < dim; i++) {
		array[i] = rand() % 101;
	}
}
void visualizzaArray(int array[], int dim) {
	for (int i = 0; i < dim; i++) {
		printf("%d\n", array[i]);
	}
	printf("\n\n");
}

void ordinaArray(int array[], int dim){
	int temp = 0;
	for ( int i = 0; i < dim - 1; i++) { //il primo ciclo for scorre tutte le posizioni dell'array;
		for (int j = 0; j < dim - 1; j++) { //il secondo ciclo for effettua il confronto di ogni elemento con tutti i suoi successivi, spostando i valori più grandi in fondo;
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	

}

void unisciArray(int arrayA[], int arrayB[], int arrayC[], int dim, int dim2) {
	int x = 0; //indice arrayA;
	int y = 0; //indice arrayB;
	int z = 0; //indice arrayC;
	for (z = 0; z < dim2; z++) { //il ciclo for scorre tutte le posizioni del terzo array, dove andrò ad inserire il risultato dell'unione dei due array iniziali;
		if (x < dim && y < dim) {// prima di tutto controllo che i due indici dei due array iniziali non abbiano superato i limiti degli array, ricordando che partono entrambi da 0;
			//nel caso gli indici non abbiano ancora superato il limite degli array iniziali, effettuo il paragone normalmente;
			if (arrayA[x] < arrayB[y]) { // confronto i due valori e aggiungo all'array finale il più piccolo dei due.  
				arrayC[z] = arrayA[x];
				x++; //Inoltre, aumento di uno l'indice dell'array che conteneva il valore più piccolo (in questo modo, il valore più grande resta il metro di paragone fino a quando non viene superato);

			}
			else if (arrayA[x] > arrayB[y]) { //stessa identica logica nel caso opposto;
				arrayC[z] = arrayB[y];
				y++;

			}
			else { //prendo anche in considerazione la ossibilità di avere un confronto tra due numeri uguali: in quel caso, li aggiungo entrambi e aumento entrambi gli indici;
				arrayC[z] = arrayA[x];
				z++; //non devo dimenticare di aumentare di uno l'indice dell'array finale, dato che sto inserendo due valori in una volta;
				arrayC[z] = arrayB[y];
				x++;
				y++;

			}
		}else if (x == dim) { //se invece uno dei due indici ha ormai superato i confini dell'array, mi limito ad aggiungere tutti i valori che avanzano nell'altro array, dato che ormai non serve più effettuare nessun confronto.
			while (y != dim) { //aggiungo quindi tutti i valori che restano nell'altro array, fino a quando l'indice non ha assunto tutti i valori possibili;
				arrayC[z] = arrayB[y];
				y++;
				z++;//devo incrementare manualmente entrambi gli indici, altrimenti mi limiterei a sovrascrivere il valore contenuto all'indice z più volte.

			}
		}
		else if (y == dim) { //stessa identica logica nel caso fosse l'indice del secondo array a raggiungere per primo la fine;
			while (x != dim) {
				arrayC[z] = arrayA[x];
				x++;
				z++;//anche qui, incremento entrambi gli indici manualmente.

			}





		}

		
	}
	
}
	
	