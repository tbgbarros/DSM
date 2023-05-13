#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
	
struct testes{
	int* num;
	float* dec;
	char letra[20];
};	

int main() {
	//gerencia e uma struct do tipo testes
	testes gerencia[5];
	//*prtGerencia e um ponteiro do tipo testes e recebe &gerencia
	//testes *prtGerencia = &gerencia;
	int num[5];
	float dec[5];
	char *let;
	let= gerencia->letra;
	//char letra[20];
	gerencia->num=num;
	gerencia->dec=dec;
	
	
	
	for(int i=0; i<5; i++){
		cout << "Digite um numero inteiro: ";
		cin >> *gerencia->num;
		*gerencia->num=100;
		
		cout << "Digite um numero decimal: ";
		cin >> *gerencia->dec;
		*gerencia->dec=1.99;
		
		cout << "Digite uma letra: ";
		cin >> *let;
		strcpy(gerencia->letra,"W");
					
	}

	for(int j=0; j<5; j++){
		cout << "--------------------------";
		cout << endl << "Numero inteiro: " << *gerencia->num << endl;
		cout << "Numero decimal: " << *gerencia->dec << endl;
		cout << "A letra: " << let << endl;

	}
}
