#include <iostream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double vet[9], val, num[9];
	
	for(int i = 0; i < 10; i++){	
		cout << "VALOR PARA ALTERACAO DA INFLACAO: ";
		cin >> val;	
		vet[i] = val * 1.15;	
	}
	cout << "\n";
	for(int i = 0; i< 10; i++){	
		cout << " VALORES CORRIGIDOS: R$"<< vet[i] << "\n";
	}
}

