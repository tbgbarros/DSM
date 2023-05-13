#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
using namespace std;

struct produto
{
    char nome[30];
    int *codigo;
    double *preco;
    char fornecedores[50];
};


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    produto armazena[5];
    int cod[5],i,local;
    double prec[5];
    
    armazena->codigo = cod;
    armazena->preco = prec;

    for (int i=0; i<5; i++)
    {
        cout << " Insira seu nome: ";
        cin >> armazena[i].nome;
        
        cout << " Insira o codigo: ";
        cin >> *armazena->codigo;
        armazena->codigo++;
        
        cout << " Insira o preco: ";
        cin >> *armazena->preco;
        armazena->preco++;
        
        cout << " Insira o fornecedor: ";
        cin >> armazena[i].fornecedores;

        cout << endl;
    }
    armazena->codigo = cod;
    armazena->preco = prec;
	    
    for (int j=0; j<5; j++){
		cout << " Codigo: " << *armazena->codigo << endl;
		*armazena->codigo++;
		cout << " Produto: " << armazena[j].nome << endl;
		cout << " Preco: R$" << *armazena->preco << endl;
		*armazena->preco++;
		cout << " Fornecedor: " << armazena[j].fornecedores << endl;
		cout << endl;
    }
};
