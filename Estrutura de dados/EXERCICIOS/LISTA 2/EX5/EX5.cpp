#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
#include <cmath>

using namespace std;

struct estoque{
	int codigo,qnt;
	char nome[15];
	float preco;	
};

void pedido(estoque venda[2]){
	//variaveis dentra da funcao são locais
	int codigo, quantidade;
	
	cout << "\nDigite o codigo do produto: ";
	cin >> codigo;
	cout << "\nDigite a quantidade do produto: ";
	cin >> quantidade;	
	
	
	for(int i=0; i<2; i++){
		if(codigo == venda[i].codigo){
			while(venda[i].qnt !=0){
				if(quantidade <= venda[i].qnt){
				venda[i].qnt = venda[i].qnt - quantidade;	
					cout << "Sobrou em estoque: " << venda[i].qnt << endl;
					
					}else{
						cout << "Sem estoque";
					}
			cout << "\nDigite a quantidade do produto: ";
			cin >> quantidade;				
			}
		}
	}	
}

int main(int argc, char** argv) {
	estoque  venda[2];
	
	for(int i=0; i<2; i++){
		cout << "Insira o codigo do produto: ";
		cin >> venda[i].codigo;
		cout << "Insira o nome do produto: ";
		cin >> venda[i].nome;
		cout << "Insira a quantidade do produto: ";
		cin >> venda[i].qnt;
		cout << "Insira o preco do produto: ";
		cin >> venda[i].preco;						
	}
	pedido(venda);
}
