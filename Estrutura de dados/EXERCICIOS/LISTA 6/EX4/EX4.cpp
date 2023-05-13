#include <iostream>
#include <cstdlib>
#include "estrutura_fila.h"

//#include "pilha.h"
using namespace std;

void removeProcesso(Fila *F, bool *erro){
	elem vet,*vet1;
	vet1=(Processo*)malloc((F->fim-1)*sizeof(Processo));
	int temp,var;
	temp = F->itens[0].wait;
	
	for(int i=0; i<F->fim; i++){
		if(F->itens[i].wait > temp){
			temp=F->itens[i].wait;
		}
	}
	
	for(int j=0; j<F->fim; j++){
		if(F->itens[j].wait != temp){
			vet=Out(F,erro);
			vet1[j]=vet;
			var++;
		}
	}
	
	for(int k=0; k<(var-1); k++){
			Enter(F, &vet1[k], erro);
		}
		
free(vet1);		
}
			


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int menu=0,aux=0;
	Processo *proc;
	elem X,jose;
	Fila fila1;
	bool erro;
	
	Create(&fila1);
	do {
	cout<<"------------------------------\n";
	cout<<"Insira os processos: \n";
	cout<<"1 - Incluir processo \n";
	cout<<"2 - Matar processo \n";
	cout<<"3 - Remover processo \n";
	cout<<"4 - Imprimir \n";
	cout<<"5 - Sair \n";
	cout<<"------------------------------ \n";
	cin>>menu;
	
	switch(menu) {
	case 1:
		{
			proc=(Processo*)malloc(sizeof(Processo));
			cout<<"Digite o ID: \n";
			cin>>proc->id;
			cout<<"Digite o Nome: \n";
			cin>>proc->p_name;
			cout<<"Digite a prioridade: \n";
			cin>>proc->priority;
			

			cout<<"Digite o tempo: \n";
			cin>>proc->wait;
			
			if(proc->priority > aux){
				aux=proc->priority;
			}
			
			Enter(&fila1,proc,&erro);
			free(proc);
			break;
		}
	case 2:
		{	
		removeProcesso(&fila1,&erro);
		}
				
	case 3:
		{
			jose=Out(&fila1,&erro);
		}
	case 4:
		{
			Print(&fila1);
			cout<<endl;
		}			
}
} while(menu != 5);


}
