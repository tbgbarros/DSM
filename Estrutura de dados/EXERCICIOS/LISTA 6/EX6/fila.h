// Vetor comum  e todos da fila avan�am 1 casa !
#define TAM_FILA 5
#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct Controle{
	int id,capacidade,tempo_voo;
	char modelo[50];	
}elem;

typedef struct
{
	int inicio, fim, total;
	elem itens[TAM_FILA];
} Fila;

// cabe�alho
void Create(Fila *F);
void Empty(Fila *F);
bool IsEmpty(Fila *F);
bool IsFull(Fila *F);
void Enter(Fila *F, elem *X, bool *erro);
elem Out(Fila *F, bool *erro);
void Print(Fila *F);

void Create(Fila *F)
{
	F->inicio = 0;
	F->fim = 0;
	F->total = 0;
}

void Empty(Fila *F)
{
	F->inicio = 0;
	F->fim = 0;
	F->total = 0;
}

bool IsEmpty(Fila *F)
{
	if (F->total == 0)
		return true;
	else
		return false;
}

bool IsFull(Fila *F)
{
	if (F->total == TAM_FILA - 1)
		return true;
	else
		return false;
}

// inserir elemento na fila
void Enter(Fila *F, elem *X, bool *erro)
{
	if (!IsFull(F))
	{
		*erro = false;
		F->total++;
		F->itens[F->fim] = *X;
		F->fim++;
	}
	else
		*erro = true;
}

// elem X;
elem Out(Fila *F, bool *erro)
{
	if (!IsEmpty(F))
	{
		*erro = false;
		elem X;
		X = F->itens[F->inicio];
		if (F->total == 1)
		{ // se tiver somente 1 na fila
			F->total = 0;
			F->fim = 0;
			//F->itens[F->fim] = 0;
			return X;
		}
		else
		{
			F->total--;
			// todo mundo da fila d� 1 passo a frente
			for (int i = 0; i < F->total; i++)
			{
				F->itens[i] = F->itens[i + 1]; // 0 <- 1   1 <- 2    2 <- 3
			}

			//F->itens[F->fim] = 0; // para n�o duplicar o �ltimo valor no final na fila
			F->fim--;
			return X;
		}
	}
	else
		*erro = true;
}

void Print(Fila *F)
{
	if (F->total == 0)
		cout << "Ninguem na fila porra." << endl;
	else
	{ // imprimi como se fosse vetor comum
		cout << "------------------------------------" << endl;
		//cout << "---------Todos Avioes------------" << endl;
		for (int i = F->inicio; i < F->fim; i++)
		{
						
			cout << " | ID: " << F->itens[i].id << " | ";
			cout << " | Aviao: " << F->itens[i].modelo << " | ";
			cout << " | Capacidade: " << F->itens[i].capacidade << " | ";
			cout << " | Tempo Voo: " << F->itens[i].tempo_voo << " | \n";
		}
	}
}


