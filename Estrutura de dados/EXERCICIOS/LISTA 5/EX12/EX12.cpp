#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <locale>
#include <math.h>
#include "pilha.h"

using namespace std;

void tamPilha(Pilha *P1, Pilha *P2){
	if(P1->topo > P2->topo){
		cout << endl << " A pilha 1 é maior";
	}else{
		cout << endl << " A pilha 2 é maior";
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
	
	cout << endl << " Quantidade de elementos da pilha 2: ";	
	cin >> num2;
	cout << "----------------------------------------" << endl;
	for(int i=0; i<num2; i++){
		cout << " Elemento P2 [" << i+1 << "] : ";
		cin >> comp;
		Push(&P2, &comp, &erro);
	}
	tamPilha(&P1, &P2);
}
