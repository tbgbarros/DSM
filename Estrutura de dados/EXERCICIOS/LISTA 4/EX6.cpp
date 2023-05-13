#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
    int linhas, colunas;
    cout << "Digite o número [L]: ";
    cin >> linhas;
    cout << "Digite o número [C]: ";
    cin >> colunas;

    //matriz
    int** matriz = (int**) malloc(linhas * sizeof(int*));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    // Imprimindo para ver se esta correta
    cout << "Matriz criada:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz[i][j] << " | ";
        }
        cout << endl;
    }

    // liberar memoria matriz tem que usar 2 for
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

	//funcao clock muito stack
    clock_t inicio = clock();
    int** matriz2 = (int**) malloc(10 * sizeof(int*));
    for (int i = 0; i < 10; i++) {
        matriz2[i] = (int*) malloc(10 * sizeof(int));
    }
    clock_t fim = clock();
    double tempoGasto = (double) (fim - inicio) / CLOCKS_PER_SEC;
    cout << "Tempo gasto para criar uma matriz 10x10: " << tempoGasto << " segundos" << endl;

    inicio = clock();
    int** matriz3 = (int**) malloc(1000 * sizeof(int*));
    for (int i = 0; i < 1000; i++) {
        matriz3[i] = (int*) malloc(1000 * sizeof(int));
    }
    fim = clock();
    tempoGasto = (double) (fim - inicio) / CLOCKS_PER_SEC;
    cout << "Tempo gasto para criar uma matriz 1000x1000: " << tempoGasto << " segundos" << endl;

    // Liberando a memória das outras matrizes
    for (int i = 0; i < 10; i++) {
        free(matriz2[i]);
    }
    free(matriz2);
    for (int i = 0; i < 1000; i++) {
        free(matriz3[i]);
    }
    free(matriz3);

    return 0;
}

