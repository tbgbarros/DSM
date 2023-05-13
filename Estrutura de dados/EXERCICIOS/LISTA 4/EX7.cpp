#include <iostream>
#include <ctime>

using namespace std;

int main() {
    int n, i;
    //obrigado stackoverflow kk - nao da numeros negativos
    unsigned long long int fat = 1;

    cout << "Digite um numero inteiro para calcular seu fatorial: ";
    cin >> n;
    
    /* ----------------------------------------------*/

    clock_t inicio = clock(); 
	    for (i = 2; i <= n; i++) {
	        fat *= i;
	    }
			cout << "Fatorial de " << n << " = " << fat << endl;
	clock_t fim = clock();
	
	/* ----------------------------------------*/

    double tempo_execucao = (double) (fim - inicio) / CLOCKS_PER_SEC;

    cout << "Tempo de execucao: " << tempo_execucao << " segundos" << endl;

    return 0;
}

