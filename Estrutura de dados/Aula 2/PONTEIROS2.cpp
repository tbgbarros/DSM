#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cstring>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	int vetor[5],soma=0, media;
	
	
	int *ptr_dados = NULL;
	ptr_dados = vetor;
	
	for(int i=0; i<5; i++){
		cout << "Digite um numero da posição [" << i+1 << "]:";
		cin >> *ptr_dados;
	}
	
	ptr_dados = vetor;
	
	for(int i=0; i<5; i++){
		cout << "Valor digitado: " << *ptr_dados << endl;
		cout << "Posição de memoria: " << ptr_dados << endl;
		cout << "A soma dos valores: " << *ptr_dados*2 << endl;
		 
	}
	//resetar os ptr_dados
	ptr_dados = vetor;
	
	for(int i=0; i<5; i++){
		soma=soma+*ptr_dados;
		ptr_dados++;
	}
	media=soma/2;
	cout << "A media dos valores: " << media << endl;
	
	return 0;
}
