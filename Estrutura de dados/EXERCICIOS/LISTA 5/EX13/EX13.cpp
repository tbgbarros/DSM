#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <locale>
#include <math.h>
#include "pilha.h"

using namespace std;

void tamPilha(Pilha *P1, Pilha *P2, int qnt){
	
	int var;
	
	if(P1->topo > P2->topo){
			cout << endl << "Pilha 1 é maior!";
		}else if(P1->topo < P2->topo){
			cout << endl << "Pilha 2 é maior!";
		}else{
			cout << "Tamanho de pilhas iguais e ";
		for(int i=0; i<qnt; i++){
			for(int j=0; j<qnt; j++){
				if(P1->itens[i] == P2->itens[j]){
					var++;
				}
			}
		}
		if(var == qnt){
			cout << "as pilhas possuem os mesmo elementos";
		}else{
			cout << "as pilhas não possuem os mesmo elementos";
		}
	}
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1,num2,aux;
	Pilha P1, P2;
	bool erro;
	elem comp;
	
	Create(&P1);
	Create(&P2);
		
	cout << endl << " Quantidade de elementos da pilha 1: ";	
	cin >> num1;
	cout << "----------------------------------------" << endl;
		
	for(int i=0; i<num1; i++){
		cout << " Elemento P1 [" << i+1 << "] : ";
		cin >> comp;
		Push(&P1, &comp, &erro);
	}
	for(int i=0; i<num1; i++){
		cout << " Elemento P2 [" << i+1 << "] : ";
		cin >> comp;
		Push(&P2, &comp, &erro);
	}
	tamPilha(&P1, &P2, num1);
}
