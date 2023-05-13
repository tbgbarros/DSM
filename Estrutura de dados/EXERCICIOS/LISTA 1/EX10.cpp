#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <locale.h>

using namespace std;

void consulta(int);

void consulta(int valor){
	int div;
	for(int i = 1; i <= valor; i++){
		if(valor % i == 0){
			div++;
		}
	}
	if(div == 2){
		cout << "O numero é primo";	
	}else{	
		if(valor %2 == 0){
			cout << "O numero é par";
		}else{
			cout<< "O numero é impar";
		}
	}	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;	
	cout << "Insira um valor inteiro: ";
	cin >> valor;	
	consulta(valor);	
}

