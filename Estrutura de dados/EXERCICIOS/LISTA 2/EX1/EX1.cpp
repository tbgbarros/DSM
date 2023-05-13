#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <math.h>
#include <string.h>

using namespace std;

struct conta_corrente{
	char nome[30], cpf[10];
	int valor_conta;
};

void cadastro(){
	//chamar struct e denominar um apelido
	conta_corrente conta_c[5];
	int valor1;
	char var1[30], var2[10];
	
	//loop cadastro
	for(int i=0; i<5; i++){
		cout << "Insira o nome da conta: ";
		cin >> conta_c[i].nome;
		cout << "Insira o CPF: ";
		cin >> conta_c[i].cpf;
		cout << "Insira o valor da conta: ";
		cin >> conta_c[i].valor_conta;
		cout << "\n";	
	}

	//if de ordenação
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			if(conta_c[j+1].valor_conta > conta_c[j].valor_conta){
				valor1 = conta_c[j].valor_conta;				
				
				//se for verdade ja inclui os valores
				strcpy(var1,conta_c[j].nome);
				strcpy(var2,conta_c[j].cpf);
				//acrescenta +1 valor pra continuar loop
				conta_c[j].valor_conta = conta_c[j+1].valor_conta;
				
				strcpy(conta_c[j].nome, conta_c[j+1].nome);
				strcpy(conta_c[j].cpf, conta_c[j+1].cpf);
				//loop
				conta_c[j+1].valor_conta = valor1;
				strcpy(conta_c[j+1].nome, var1);
				strcpy(conta_c[j+1].cpf, var2);
			}
		}
	}
	
	//visualização dos FOR
	for(int k=0; k<5; k++){
		cout << "\nNome da conta: " << conta_c[k].nome;
		cout << "\nCPF da conta: " << conta_c[k].cpf;
		cout << "\nValor da conta: " << conta_c[k].valor_conta << endl;
	}
	cout << "\n";
}


int main()
{
	cout << "\nSeja bem vindo a sua conta bancaria \n\n";
	cadastro();
}

