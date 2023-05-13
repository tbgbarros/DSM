#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
#include <cmath>

using namespace std;

//struct base
struct aeroporto{
	int cod_aero, qnt_origem, qnt_destino,cod_aero_origem, cod_aero_destino;
	char nome[15];
};
//struct dentro da struct
struct voo{
	aeroporto cod_aero; 
	int cod_voo;
};

void controle(voo controle_voo[2]){
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

int main() {
	aeroporto vet_aeroporto[5];
	voo vet_voo[2];
	
	for(int i=0; i<5; i++){
		if(vet_aeroporto[i].cod_aero < 5){
			while(vet_aeroporto[i].cod_aero !=0){
				cout << "Insira o codigo do aeroporto: ";
				cin >> vet_aeroporto[i].cod_aero;
				cout << "Insira o nome do aeroporto: ";
				cin >> vet_aeroporto[i].nome;	
			}
			cout << "Numero incorreto do aeroporto.";

		}else{
			cout << "Erro";
		}
	}
	for(int i=0; i<2; i++){
		cout << "Insira o codigo do Voo: ";
		cin >> vet_voo[i].cod_voo;
		cout << "Insira o codigo do aeroporto destino: ";
		cin >> vet_voo[i].cod_aero.cod_aero_destino;
		cout << "Insira o codigo do aeroporto origem: ";
		cin >> vet_voo[i].cod_aero.cod_aero_origem;						
	}
	
}
