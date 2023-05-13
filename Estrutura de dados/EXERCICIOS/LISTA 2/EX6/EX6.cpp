#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
#include <cmath>

using namespace std;

struct sorteio{
	int numero;
	char nome[15];	
};

void sorteado(sorteio num[2]){
	int numero;
	char nome;
	for(int i=0; i<2; i++){
		numero = rand() % 2;
	} 
	cout << "Numero sorteado: " << num[numero].numero << ", da pessoa: " << num[numero].nome;

}

int main(int argc, char** argv) {
	sorteio num[2];
	 
	for(int i=0; i<2; i++){
		cout << "Insira seu nome: ";
		cin >> num[i].nome;
		cout << "Insira o numero: ";
		cin >> num[i].numero;
	}
	sorteado(num);
	return 0;
}
