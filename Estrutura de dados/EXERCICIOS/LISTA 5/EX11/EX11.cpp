#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <locale>
#include <math.h>
#include "pilha.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1,aux,aux_i=0,vetor[num1];
	Pilha P;
	bool erro;
	elem comp;
		
	cout << endl << " Quantidade de elementos da pilha: ";	
	cin >> num1;
	
	Create(&P);
	cout << endl;
	
	for(int i=0; i<num1; i++){
		cout << " Elemento:|" << i+1 << "|";
		cin >> comp;
		Push(&P, &comp, &erro);
	}
	cout << endl;
	
	for(int j=0; j<num1; j++){
		aux=Pop(&P, &erro);
		cout << " Ordenado:[" << j+1 << "]" << " [" << aux << "]" << endl;
	}
}
