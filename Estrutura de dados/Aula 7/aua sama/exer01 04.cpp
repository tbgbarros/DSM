#include <iostream>
#include "estrutura_fila.h"

int main(){
	setlocale(LC_ALL,"Portuguese");
	int menu=0;
	elem v;
	Fila f;
	bool erro=false;
	Create(&f);
	do {
	cout<<"Digite sua escolha: \n";
	cout<<"1 - Inserir elemento na fila \n";
	cout<<"2 - Retirar elemento na fila \n";
	cout<<"3 - Exibir elemento na fila \n";
	cout<<"4 - Sair \n";
	cin>>menu;
	
	switch(menu) {
	case 1:
		{
			cout<<"Digite o numero: \n";
			cin>>v;
			Enter(&f,&v,&erro);
			if(erro==true)
				cout << "Não foi possivel inserir na fila";
			else cout << "Item inserido na fila";
			break;
		}
	case 2:
		v = Out(&f,&erro);
		if(erro==true)
			cout << "Nao foi possivel retirar";
		else cout << "Elemento retirado da fila";
		
	case 3:
		{
			Print(&f);
			cout<<endl;
		}
		
}
} while(menu != 4);


}
