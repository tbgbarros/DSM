#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale.h>
#include <math.h>
#include <string.h>

using namespace std;

//struct base
struct data{
	int dia, mes, ano;
};
//struct dentro da struct
struct pessoa{
	data nascimento;
	char nome[30];
};

//funcao que deve chamar struct dentro
void informacoes(){
	pessoa info[2];
	int var, var1, var2;
	char var3[30];
	//for para rodar 5 pessoas
	for(int i=0; i<2; i++){
		cout << "\nInsira seu nome: ";
		cin >> info[i].nome;
		cout << "Insira o dia do nascimento: (xx) ";
		cin >> info[i].nascimento.dia;
		cout << "Insira o mes do nascimento: (xx) ";
		cin >> info[i].nascimento.mes;
		cout << "Insira o ano do nascimento: (xxxx) ";
		cin >> info[i].nascimento.ano;
	}


//for de exibição

	
	for(int i=0; i<2; i++){
		if(info[i].nascimento.ano > info[i+1].nascimento.ano){
			var = info[i].nascimento.ano;
			var1 = info[i].nascimento.dia;
			var2 = info[i].nascimento.mes;
			strcpy(var3, info[i].nome);
			;
			
		}

	}
	cout << "Nome: " << var3;
	cout << " | " << var1 << " | " << var2 << " | " << var << endl;
	cout << "\n";
}
	
int main(int argc, char** argv) {
	informacoes();
	return 0;
}
