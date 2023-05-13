#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

float maior_menor(float);

float* maior_menor(float *vetor){
	float aux_maior, aux_menor;
	aux_maior = vetor[0];
	aux_menor = vetor[0];
	
	for(int i =0 ; i < 10; i++){
		if(aux_maior < vetor[i]){
			aux_maior = 0;			
			aux_maior = vetor[i];				
		}
		for(int i =0 ; i < 10; i++){		
			if(aux_menor > vetor[i]){
				aux_menor = 0;		
				aux_menor = vetor[i];	
			}				
		}
	}
	float vet[2];
	vet[0] = aux_menor;
	vet[1] = aux_maior;

	return vet;
}

int main() {
	
	float vetor[10], valor,*res[2];
	
	for(int i = 0; i < 10; i++){
		cout << "Insira um valor qualquer: ";
		cin >> valor;
		vetor[i] = valor;
	}
	float* vet = maior_menor(vetor);
	cout << "O numero maior e: " << vet[0] << " | " << "O numero menor e: "<< vet[1];

}

