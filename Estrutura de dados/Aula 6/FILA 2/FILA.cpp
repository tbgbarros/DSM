#include <iostream>
#include <cstdlib>
#include "estrutura_fila.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	int num_elem;
	Fila fila1;
	elem X;
	bool erro;
	
		do{
		
		cout << "+============== M E N U =========+ \n";
		cout << "| 1 - Insira elementos a fila    | \n";
		cout << "| 2 - Retira elementos a fila    | \n";
		cout << "| 3 - Exibe elementos a fila     | \n";
		cout << "| 4 - Sair                       | \n";	
		cout << "|================================| \n";
		cout << "Escolha a opcao: ";
		cin >> opcao;
		cout << endl;
		
		switch(opcao){
			case 1:
				//inseri numero de elementos
					cout << "Digite o numero de elementos: ";
					cin >> num_elem;
					
				//CRIAR VALOR DO ELEMENTO					
				Create (&fila1);
					for(int i=0; i<num_elem; i++){
						cout << "Digite o valor do elemento |" << i+1 << "|"; 
						cin >> X;
						Enter (&fila1, &X, &erro);
	}  			  
				break;
			case 2:
				X = Out(&fila1, &erro)	  
				break;		
			case 3:
				cout << "+============== ELEMENTOS =========+ \n";
				Print(&fila1);
				cout << endl;
				cout << "|==================================| \n";
				cout << endl;
				break;	
			case 4:
				cout << "faloww tchau!!! \n";
				break;														
			}
		}while(opcao != 4);
		
return 0;		
}

