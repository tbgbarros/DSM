#include <iostream>
#include<cstdlib>
#include<locale>
#include "estrutura_pilha.h"
using namespace std;
int main(){
	setlocale(LC_ALL,"Portuguese");
	Pilha p1,p2;
	elem v;
	bool erro;
	int tam;
	Create(&p1);
	Create(&p2);
	cout<<"Digite o tamanho da pilha \n";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Digite o numero \n";
		cin>>v;
		Push(&p1, &v, &erro);
	}
	for(int i=0;i<tam;i++){
	
		Pop(&p1,&erro);
		Push(&p2, &X, &erro);
		
	}
	cout << "-----------" << endl;
	for(int i=0;i<tam;i++){
		cout<<p2.itens[i] << endl;
	}
	}

