#include <iostream>
#include "pilha.h"

using namespace std;

int main() {
	
	Pilha pilha1;
	bool erro;

	Create(&pilha1);
	Push(&pilha1, "A", &erro);
	Push(&pilha1, "B", &erro);
	Push(&pilha1, "C", &erro);
	Push(&pilha1, "D", &erro);
	Pop (&pilha1, &erro);
	Pop (&pilha1, &erro);
	Push(&pilha1, "K", &erro);
	Push(&pilha1, "V", &erro);
	Pop (&pilha1, &erro);
	
	cout << "--------------------------------" << endl;
	cout << "| Pilha ";
	
	for(int i=0; i<pilha1.topo+1; i++)
	{
		cout << " | "<< pilha1.itens[i] << " | ";
	}	
}
