#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Conta{
	char nome[50], cpf[50];
	long int cc;
};

void cadastro(){
	Conta c[5];
	long int aux;
	char aux1[50], aux2[50];
	for(int i = 0; i <5; i++){
		cout<< " Insira o nome: \n";
		cin >> c[i].nome;
		cout<< "Insira o CPF: \n";
		cin>> c[i].cpf;
		cout << "Insira a conta corrente \n";
		cin >> c[i].cc;
		
	}
	
	
	
		
		
	for(int i = 0; i<5; i++){
		for(int j = 0; j < 4; j++){
			if(c[j].cc > c[j+1].cc){
				aux = c[j].cc;
				strcpy(aux1,c[j].nome);
				
				strcpy(aux2,c[j].cpf);
				c[j].cc = c[j+1].cc;
				strcpy(c[j].nome,c[j+1].nome);
				strcpy(c[j].cpf,c[j+1].cpf);
				
				c[j+1].cc = aux;
				strcpy(c[j+1].nome,aux1);
				strcpy(c[j+1].cpf,aux2);
			}
		}
	} 

	for(int j = 0; j < 5; j++){
		cout< "\n";
		cout<< "Nome: " << c[j].nome << "\n";
		cout<< "CPF: " << c[j].cpf<< "\n";
		cout<< "Conta corrente: "<< c[j].cc << "\n";
		cout << "---------------------------------------- \n";
	}
}


int main() {
	
	cout<< "Bem vindo ao sistema gerenciador de contas \n";
	
	cadastro();
	
	
}
