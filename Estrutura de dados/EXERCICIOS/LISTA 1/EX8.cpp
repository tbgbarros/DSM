#include <iostream>
#include <cstdlib>
#include <locale.h>

// Valdir e guilherme e thiago barros fizeram juntos em chamada
using namespace std;
void crescente(int *vetor);
void decrescente(int *vetor);


void crescente(int *vetor){
	int aux;
	for(int i = 0; i < 10; i++ ){
		for(int j = 0; j < 9; j++){
			if(vetor[j] > vetor[j +1]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
	for(int i = 0; i < 10; i++){
		cout << vetor[i] << "|";
	}
}

void decrescente(int *vetor){
	
	int aux;
	for(int i = 0; i < 10; i++ ){
		for(int j = 0; j < 9; j++){
			if(vetor[j+1] > vetor[j]){
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
	for(int i = 0; i < 10; i++){	
		cout << vetor[i] << "|";
	}	
}

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	int vetor[10], valor, resposta;
	
	for(int i = 0; i < 10; i++){
		cout << "Insira um valor inteiro: ";
		cin >>  valor;
		vetor[i] = valor;	
	}

	cout << "Tecle '1' para organizar a lista em ordem crescente e '2' para ordem decrescente. \n";
	cin >> resposta;
	
	if(resposta == 1){
		crescente(vetor);
	}else if(resposta == 2){
		decrescente(vetor);
	}else{
		cout << "Opção inválida";	
	}
}


