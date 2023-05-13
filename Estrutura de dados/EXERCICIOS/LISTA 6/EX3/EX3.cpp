#include <iostream>
#include <cstdlib>
#include "estrutura_fila.h"
#include "pilha.h"
using namespace std;

void exibeFilaInvertida(Fila *F, elem *X, bool *erro){
	Pilha P;
	elem Y;
	bool erro2;
	
	Create(&P);
	// Retirando o elemento da fila e inserindo na Pilha de modo que fique invertidos: 
	
	for(int i = 0; i < 10; i++){
		Y = Out(F, erro);
		Push(&P, &Y, &erro2);
		
		
	}
	// Exibindo a fila invertida:
	cout << "fila invertida: " << endl;
	cout << "-----------------------------" << endl;
	Empty(F);
	
	// Inserindo os elementos invertidos na fila novamente: 
	for(int j = 0; j <10; j++){
		Y = Pop(&P, &erro2);
		Enter(F, &Y, &erro2);
		
	}
	// exibindo a fila invertida:
	Print(F);
}

int main() {
	Fila Fila1;
	elem X;
	bool erro;
	
	
	
	Create(&Fila1);
	
	for(int i = 0; i < 10; i++){
		cout << "Insira o elemento " << i + 1 << " de sua fila: ";
		cin >> X;
		Enter(&Fila1, &X, &erro);
		cout << "Inserido com sucesso!" << endl;
		
		
	
	}
	cout << "Exibindo a fila original: " << endl;
	cout << "-----------------------------------" << endl;
	Print(&F);
	cout << endl;
	//Chamada da Função:
	//exibeFilaInvertida(&F,&X,&erro);
	
}
