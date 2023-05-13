#include <iostream>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
    int *ptr_matriz;
    int tamanho;

    cout << "Digite o tamanho da matriz quadrada: ";
    cin >> tamanho;

    // Alocando dinamicamente uma matriz quadrada de zeros
    clock_t start = clock();
    ptr_matriz = new int[tamanho * tamanho]();
    clock_t end = clock();

    // Impressão do tempo de alocação
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << endl << "Tempo de alocação para matriz de tamanho " << tamanho << " x "  << tamanho << ": " << time_taken << " segundos\n";

    // Alocando dinamicamente uma matriz quadrada de zeros com tamanho 1000x1000
    start = clock();
    int *ptr_matriz2 = new int[10 * 10]();
    end = clock();

    time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Tempo de alocação para matriz de tamanho 10x10: " << time_taken << " segundos\n";
    
    // Alocando dinamicamente uma matriz quadrada de zeros com tamanho 1000x1000
    start = clock();
    int *ptr_matriz3 = new int[1000000 * 1000000]();
    end = clock();

    time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Tempo de alocação para matriz de tamanho 1000000x1000000: " << time_taken << " segundos\n";

    delete[] ptr_matriz;
    delete[] ptr_matriz2;
    delete[] ptr_matriz3;

    return 0;
}

