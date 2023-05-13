#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>
#include <cmath>
using namespace std;

struct pessoa{
	char nome[30];
	char sexo[10];
	int *idade;
};

int main(int argc, char** argv) {
	pessoa *p1 = NULL, *p2 = NULL, *p3 = NULL;
	int i;
	
	//p1 vai virar um vetor, dai trata
	p1 = (pessoa*)malloc(100*sizeof(pessoa));
	
	for(int i=0; i<2; i++){
		strcpy(p1[i].nome, "Thiago");
		cout << "Sexo:";
		cin >> p1[i].sexo;
		
		p1[i].idade = (int*)malloc(1*sizeof(int));
		cout << "Idade: ";
		// * usado ponteiro pois idade é ponteiro da struct pessoa que recebe p1
		cin >> *p1[i].idade;
	}
	//limpar memoria
	free(p1);
	free(p2);
	free(p3);
	
	p2 = calloc();
	p3 = realloc();*/
	
	return 0;
}

	/**(p1[0].idade)=5
	strcpy(p1[0].nome = "Thiago");
