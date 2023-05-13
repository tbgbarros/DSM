#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <locale>
#include <math.h>
#include "pilha.h"

using namespace std;

void NumerosInfo(Pilha *P, bool *erro, int *num_elem){
	int aux, num2, soma, maior, menor, *vetor;
	float media;
	
	vetor=(int*)malloc(*num_elem * sizeof(int));
	for(int i=0; i<*num_elem; i++){ 
		aux = Pop(P,erro);
		vetor[i]=aux;
		soma = soma+vetor[i];
	}
	maior=vetor[0];
	menor=vetor[0];	
	
	for(int j=0; j<*num_elem; j++){
			if(vetor[j]>maior){
				maior=vetor[j];
			}
			if(vetor[j]<menor){
				menor=vetor[j];	
			}
		}
	
		media= (soma / *num_elem);
		cout << "Media: " << media << endl;
		cout << "O maior é: " << maior << endl;
		cout << "O menor é: " << menor << endl;
};

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1;
	Pilha P;
	bool erro;
	elem X;
		
	cout << "Quantidade de elementos da pilha: ";	
	cin >> num1;
	
	Create(&P);
	
	for(int i=0; i<num1; i++){
		cout << "Elemento:|" << i+1 << "|";
		cin >> X;
		Push(&P, &X, &erro);
	}	
			
	//exibicao
	NumerosInfo(&P, &erro, &num1);
}
