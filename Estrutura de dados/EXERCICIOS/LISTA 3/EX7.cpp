#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct produtos{
	char nome[30];
	float *valor;
	float *ajuste;
};

int main() {
	produtos cadastra[2];
	int var,i;
	char nom[30];
	float val[2],ajust[2],aux;
	
	cadastra->valor=val;
	cadastra->ajuste=ajust;
	
	
	for(int i=0; i<2; i++){
		cout << "Escreva o nome do produto: ";
		cin >> cadastra[i].nome;
		cout << "Escreva o valor do produto: R$";
		cin >> *cadastra->valor;
		aux = *cadastra->valor + (0.0478 * *cadastra->valor);
		*cadastra->ajuste = aux;
		cadastra->valor++;
		cadastra->ajuste++;

	}
	cadastra->valor=val;
	cadastra->ajuste=ajust;
	
	for(int j=0; j<2; j++){
		cout << "---------------------------" << endl;
		cout << "ID: " << j << endl;
		cout << "Nome: " << cadastra[j].nome << endl;
		cout << "Valor R$" << *cadastra->valor << endl;
		cout << "Valor ajustado R$" << *cadastra->ajuste << endl;
		*cadastra->valor++;
		*cadastra->ajuste++;

	}
	return 0;
}
