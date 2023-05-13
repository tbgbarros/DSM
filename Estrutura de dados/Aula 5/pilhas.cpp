#include <iostream>
#include <stdlib>
#include "estrutura_pilha.h"

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num_elem;
	elem comp;
	bool erro;
	Pilha pilha1, pilha2;
	
	cout << "Digite o numero de elementos: ";
	cin >> num_elem;
	
	Create (&pilha1);
	for(int i=0; i<num_elem; i++){
		cout << "Digite o valor do elemento |" << i+1 << "|"; 
		cin >> comp;
		Push (&pilha1, &comp, &erro);
	}
	
	//exibicao
	for(int i=0; i<num_elem; i++){
		cout << "Elemento:|" << i+1 << "|" << Pilha.itens[i] << endl;
	}
	
	cout << "TOPO: " << Pilha.itens[pilha1.itens] << endl;
	cout << "Valor do topo: " << Pilha.topo << endl;
	cout << "-------------------";

	
	
}
