#include <iostream>
#include <locale>
#include "estrutura_fila.h"
using namespace std;

void Menu()
{
	system("cls");
    cout << "Digite a sua escolha: \n"
        "    1 - Inserir elemento na fila \n"
        "    2 - Retirar elemento da fila \n"
        "    3 - Exibir elementos da fila \n"
        "    4 - Sair \n" ;
		cout<< "Faça a sua opção: " << endl;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	elem elemento;
	Fila Fila1;
	bool erro=false; 
	int opcao;
	cout << "Faça a sua escolha: " << endl;
	Create(&Fila1);
	do
	{
		Menu();
		cin >> opcao;
		switch(opcao)
		{
			case 1:
			{
				cout << "Inserir elemento na Fila" << endl;
				cin >> elemento;
				Enter(&Fila1, &elemento, &erro);
				if(erro==true)
				{
					cout << "Fila cheia, último elemento não foi inserido" << endl;
				}
				system("Pause");
				break;
			}
			case 2:
			{
				elemento = Out(&Fila1,&erro);
				if(erro==false)
					cout << "Elemento " << elemento << " retirado da fila." << endl;
				else cout << "Não existe elemento a ser retirado" << endl; 
				cout << endl;
				system("Pause");
				break;
			}
			
			case 3:
			{
				cout << "Exibir elementos da fila." << endl;
				Print(&Fila1);
				cout << endl;
				system("Pause");
				break;
			}
			
			default:
			{
	            cout << "Escolha invalida.\n\n";
	            Menu();
	            break;
			}
		}
	}
	while(opcao!=4);
}
