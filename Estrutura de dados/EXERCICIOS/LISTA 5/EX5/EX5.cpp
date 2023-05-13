#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <locale>
#include "pilha.h"

using namespace std;
	
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num_elem = 20 ;
	elem comp, vetor[num_elem];
	bool erro;
	Pilha pilha1, pilha2, pilha3;
	
	Create (&pilha1);
	Create (&pilha2);
	Create (&pilha3);
	for(int i=0; i<num_elem; i++){
		cout << "Digite o valor do elemento |" << i+1 << "|"; 
		cin >> vetor[i];
		
		if(vetor[i] % 2 == 0 ){
			Push (&pilha1, &vetor[i], &erro);	
		}else{
			Push (&pilha2, &vetor[i], &erro);
		}
	}		
	//pilha 2 porra	
	int vetor2[pilha2.topo];
	int aux = pilha2.topo;
	
	for(int i=0; i<=aux; i++){
			vetor2[i]=pilha2.itens[i];
		}
	Empty(&pilha2);	
	
	for(int i=0; i<=aux; i++){
		if(vetor2[i] > 0){
			Push(&pilha3, &vetor2[i], &erro);
		}else{
			Push(&pilha2, &vetor2[i], &erro);
		}
	}

	//pilha 1 delicia	
	int vetor3[pilha1.topo];
	int aux2 = pilha1.topo;
	
	for(int i=0; i<=aux2; i++){
			vetor3[i] = pilha1.itens[i];	
		}
	Empty(&pilha1);	
	
	for(int i=0; i<=aux2; i++){
		if(vetor3[i]<=-1){
			Push(&pilha3, &vetor3[i], &erro);
		}else{
			Push(&pilha1, &vetor3[i], &erro);
		}
	}			
			
	//exibicao
		cout << endl << "Pilha 1" << endl;
		for(int i=0; i<=pilha1.topo; i++){
			cout << "Elemento:|" << i+1 << "|" << pilha1.itens[i] << endl;
		}
		cout << endl << "Pilha 2" << endl;
		for(int i=0; i<=pilha2.topo; i++){
			cout << "Elemento:|" << i+1 << "|" << pilha2.itens[i] << endl;
		}	
		cout << endl << "Pilha 3" << endl;
		for(int i=0; i<=pilha3.topo; i++){
			cout << "Elemento:|" << i+1 << "|" << pilha3.itens[i] << endl;
		}
	
}
