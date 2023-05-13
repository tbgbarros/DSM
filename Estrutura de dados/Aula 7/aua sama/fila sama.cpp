//Vetor comum  e todos da fila avançam 1 casa !
#define TAM_FILA 5
using namespace std;
typedef int elem;

typedef struct {
			int inicio, fim, total;
			elem itens[TAM_FILA];
} Fila;

// cabeçalho
void Create(Fila *F);//criar a fila
void Empty(Fila *F);//fila vazia
bool IsEmpty(Fila *F);//verifica se esta vazia
bool IsFull(Fila *F);//verifica se esta cheia
void Enter(Fila *F, elem *X, bool *erro);//inserir na fila
elem Out(Fila *F, bool *erro);//retirar da fila
void Print(Fila *F);//inmprime na tela

void Create(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

void Empty(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

bool IsEmpty(Fila *F) {
    if (F->total==0)
       return true;
    else 
		return false;
}

bool IsFull(Fila *F) {
    if (F->total==TAM_FILA-1)
       return true;
    else 
		return false;
}

// inserir elemento na fila
void Enter(Fila *F, elem *X, bool *erro) {
     if (!IsFull(F)) {
          *erro=false;
          F->total++;
          F->itens[F->fim]=*X;
          F->fim++;
     }
     else *erro=true;
}

// elem X;
elem Out(Fila *F, bool *erro) {
    if (!IsEmpty(F)) {
    	*erro=false;
    	elem X;
		X=F->itens[F->inicio];
		if (F->total == 1){// se tiver somente 1 na fila
			F->total=0;
			F->fim=0;
			F->itens[F->fim] = 0;
			return X;
		}
		else{ 
			F->total--;
			// todo mundo da fila dá 1 passo a frente			   
			for(int i=0; i< F->total; i++){
				F->itens[i] = F->itens[i+1];// 0 <- 1   1 <- 2    2 <- 3
			}
			
			F->itens[F->fim] = 0;// para não duplicar o último valor no final na fila
			F->fim--;
			return X;
		}	
    }
    else *erro=true;
}

void Print(Fila *F){
	if(F->total == 0)
		cout << "Ninguém na fila." << endl;
	else
	{	// imprimi como se fosse vetor comum
		for (int i= F->inicio; i< F->fim; i++) 
			{
				cout << F->itens[i] << "\t";
			}
	}
}

