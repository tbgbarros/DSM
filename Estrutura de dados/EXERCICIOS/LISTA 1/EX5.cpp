#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char nome[10], sobrenome[10], soma[50];
	int qtd;
	cout << "Informe um nome: ";
	cin >> nome;
	cout << "Informe um sobrenome: ";
	cin >> sobrenome;
	
	if(strcmp(nome,sobrenome) == 1){
		strcat(nome,sobrenome);
		cout << nome;
	}else if(strcmp(nome,sobrenome)== 0){
		strcpy(soma,nome);
		strcat(soma," ");
		strcat(soma, sobrenome);
		cout << soma << "\n";
		qtd = strlen(soma);
		cout<<"Quantidade de caracteres e: " << qtd;
	}
}

