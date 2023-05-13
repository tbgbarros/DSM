#include <iostream>
#include <cstdlib>
#include "fila.h"

//#include "pilha.h"
using namespace std;

void removeProcesso(Fila *F, bool *erro){
	elem vet,*vet1;
	vet1=(Controle*)malloc((F->fim-1)*sizeof(Controle));
	int temp,var;
	temp = F->itens[0].tempo_voo;
	
	for(int i=0; i<F->fim; i++){
		if(F->itens[i].tempo_voo > temp){
			temp=F->itens[i].tempo_voo;
		}
	}

	
	for(int j=0; j<F->fim; j++){
		if(F->itens[j].tempo_voo == temp){
			cout << "--------------------------" << endl;
			cout << "--Aviao com maior tanque--" << endl;
			cout << " | ID: " << F->itens[j].id << " | ";
			cout << " | Aviao: " << F->itens[j].modelo << " | ";
			cout << " | Capacidade: " << F->itens[j].capacidade << " | ";
			cout << " | Tempo Voo: " << F->itens[j].tempo_voo << " | \n";
			cout << "--------------------------" << endl;
		}
	}
		
free(vet1);		
}
			


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int menu=0,aux=0;
	Controle *proc;
	elem X,jose;
	Fila fila1;
	bool erro;
	
	Create(&fila1);
	do {
	cout<<"------------------------------\n";
	cout<<"Insira os processos: \n";
	cout<<"1 - Incluir aviao \n";
	cout<<"2 - Remover aviao \n";
	cout<<"3 - Aviao com maior tanque \n";
	cout<<"4 - Listar avioes aguardando fila \n";
	cout<<"5 - Sair \n";
	cout<<"------------------------------ \n";
	cin>>menu;
	
	switch(menu) {
	case 1:
		{
			proc=(Controle*)malloc(sizeof(Controle));
			cout<<"Digite o ID: \n";
			cin>>proc->id;
			cout<<"Digite o Nome: \n";
			cin>>proc->modelo;
			cout<<"Digite a capacidade: \n";
			cin>>proc->capacidade;
			cout<<"Digite o tempo de Voo: \n";
			cin>>proc->tempo_voo;			
			
			Enter(&fila1,proc,&erro);
			free(proc);
			break;
		}
	case 2:
		{	
			Out(&fila1,&erro);
			cout<<endl;
		}
				
	case 3:
		{
			removeProcesso(&fila1,&erro);
			cout<<endl;
		}
	case 4:
		{
			Print(&fila1);
		}			
}
} while(menu != 5);


}
