#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

int main(){
	int lunghezza,qti;
	int colonne = 5;
	system("title PIN Generator - by GioeleDeo");
	system("color 0a");
	cout << "Inserisci la lunghezza del PIN ";
	cin >> lunghezza;
	cout << "Inserisci la quantita\' di PIN da generare ";
	cin >> qti;
	printf("Genero %d PIN ",qti);
	printf("da %d caratteri \n",lunghezza);
	printf("\n");
	printf("Attendi generazione..");
	printf("\n");
	printf("\n");
	int righe = qti/colonne;
	int resto = qti - (righe*colonne);
	if(resto != 0){
		righe = righe+1;
	}
	for(int i=0; i<righe; i++){
		for(int z=0; z<colonne; z++){
			for(int y=0; y<lunghezza; y++){
				int charNum = rand()%10;
				printf("%d", charNum);
			}
			printf("    ");
		}	
		printf("\n");
		printf("\n");
	}
	system("PAUSE");
	system("cls");
	return 0;
}

