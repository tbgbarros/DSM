#include <iostream>
#include <cstdlib>
using namespace std;

typedef int elem;

typedef struct bloco{
        elem info;
        struct bloco *prox = NULL;
}no;

typedef struct {
        no *inicio, *fim;
        int total;
} Fila;

void Create_Queue(Fila *F);
void Enter_Queue(Fila *F, elem* X, bool *erro);
elem Out_Queue(Fila *F, bool *erro);
bool IsEmpty_Queue(Fila *F);
void Print_Queue(Fila *F);

void Create_Queue(Fila *F) {
    F->inicio=NULL;
    F->fim=NULL;
    F->total=0;
}



void Enter_Queue(Fila *F, elem *X, bool *erro) 
{
    no *novo_no;
    novo_no=(no*)malloc(sizeof(no));
    /* se eu n�o conseguir criar o p � porque a mem�ria est� com espa�o cheio, 
	por isso n�o precisa da fun��o IsFull
	*/
    if (novo_no==NULL)
        *erro=true;
    else{
    	*erro=false;
    	novo_no->info = *X;
    	novo_no->prox = NULL;
    	if (F->inicio==NULL) // se for o primeiro a entrar na fila
		{
    		F->inicio = novo_no;
    		F->fim = novo_no;
    		novo_no->prox = NULL;
    		F->total++;
    	}
    	else
		{// se j� tiver alguem na fila
			F->fim->prox = novo_no;
			F->fim = novo_no;
			F->total++;
		} 
	}
}

elem j;
elem Out_Queue(Fila *F, bool *erro) 
{
    if (!IsEmpty_Queue(F))
	{
    	*erro=false;	
		j = F->inicio->info;
		if (F->inicio == F->fim)
		{// se tiver somente 1 na fila
			no *aux;
			F->inicio=NULL;
			F->fim=NULL;
			F->total--;
			free(aux);
			return j;
		}
		else{ // retira o primeiro bloco da fila
			no *aux;
			aux = F->inicio;
			F->inicio = F->inicio->prox;
			F->total--;	
			free(aux);		   
			return j;
		}
	*erro=true;
	}
}
      
      
bool IsEmpty_Queue(Fila *F) 
{
    if (F->inicio==NULL)
       return true;
    else 
		return false;
}

void Print_Queue(Fila *F)
{
	no *aux;
	aux = F->inicio;
	int total = F->total;
	cout << "Elementos da Fila (do inicio ao fim): ";
	while(total>0)
	{
		cout << aux->info;
		aux = aux->prox;
		cout << " ";
		total--;
	}
	
}


void Search_Queue(Fila *F, elem x) 
{
    no *aux;
    int total = F->total;
    aux=F->inicio;
    while (total>0){
		if(aux->info==x)
			cout << "Elemento: " << aux->info << " foi encontrado." << endl;
		aux=aux->prox;
		total--;
    }
	
	if(total==0)
		cout << "Elemento n�o encontrado" << endl;
}
