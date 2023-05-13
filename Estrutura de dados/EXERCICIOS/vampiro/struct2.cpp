#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;


struct Nasc{
	int dia, mes, ano;
};

struct Pessoa{
	Nasc nasc;
	char nome[50];
};
int main() {
	Pessoa p[5];
	int aux, aux1,aux2;
	char aux3[50];
	for( int i =0; i <5; i++){
		cout << "Insira o dia do nascimento : \n";
		cin >> p[i].nasc.dia;
		cout << "Insira o mes do nascimento: \n";
		cin >> p[i].nasc.mes;
		cout << "Insira o ano do nascimento: \n";
		cin >> p[i].nasc.ano;
		cout << "Insira o nome da pessoa: \n";
		cin >> p[i].nome;
		cout << " ------------------------------ \n";
	}
	
	for (int j = 0; j< 5; j++){
		aux = p[j].nasc.ano + 1;
		
		if(aux > p[j].nasc.ano ){
			aux = p[j].nasc.ano;
			strcpy(aux3,p[j].nome);
			aux1 = p[j].nasc.mes;
			aux2 = p[j].nasc.dia;
			
		}else if(aux == p[j].nasc.ano){
			aux1 = p[j].nasc.mes + 1;
			
			
			if(aux1 > p[j].nasc.mes ){
				aux1 = p[j].nasc.mes;
				aux2 = p[j].nasc.dia;
				strcpy(aux3, p[j].nome);
			}else if(aux1 == p[j].nasc.mes){
				aux2 = p[j].nasc.dia + 1;
				if(aux2 > p[j].nasc.dia){
					aux2 = p[j].nasc.dia;
					strcpy(aux3, p[j].nome);
				}
			}
		}
		
	}
	cout << "A pessoa mais velha e: " << aux3 << " com data de nascimento em " << aux2 << "/" << aux1 << "/" << aux;
	
	
	
}
