#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

struct produtos {
	int codigo;
	char nome[30];
	float preco;
};

int main() {
	produtos* ptr_produtos[5];
	float media;
	
	for(int i=0; i<5; i++){
		ptr_produtos[i] = new produtos;
		cout << "Produto : " << i+1 << endl;
		
		cout << "Digite o codigo: ";
		cin >> ptr_produtos[i]->codigo;
		
		cout << "Digite o nome do produto: ";
		cin.getline(ptr_produtos[i]->nome, 30);
		
		cout << "Digite o preco: ";
		cin >> ptr_produtos[i]->preco;	
	}
	//ordenacao com sort
	sort(ptr_produtos, ptr_produtos+5, [](const produtos* var1, const produtos* var2){
		return var1->preco > var2->preco;	
	});
	
	for(int i=0; i<5; i++){
		media = media +  ptr_produtos->preco;
	}
	media = media / 5;
	
	cout << "------ Listagem de produtos ------";
	
	for(int i=0; i<5; i++){
		cout << endl;
		cout << "Codigo: " << ptr_produtos[i]->codigo << endl;
		cout << "Nome: " << ptr_produtos[i]->nome << endl;
		cout << "Preco: R$" << ptr_produtos[i]->preco << endl;
	}
	
	for(int i=0; i<5; i++){
		delete ptr_produtos[i];
	}
	
	return 0;
}
