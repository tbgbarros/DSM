#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int *vetor, *vetorAtualizado;
    int n, tamAtualizado = 0;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    //malloc
    vetor = (int*) malloc(sizeof(int));
    if (vetor == NULL) {
        cout << "Erro de alocacao de memoria" << endl;
    }

    for (int i = 0; i < n; i++) {
    	cout << "Valor | " << i << " | : "; 
        cin >> vetor[i];

        //verificacao de comparacao
        if (i > 0 && vetor[i] == vetor[i-1]) {
            continue;

        }

        // realloc
        tamAtualizado++;
        vetorAtualizado = (int*) realloc(vetor, tamAtualizado * sizeof(int));
        if (vetorAtualizado == NULL) {
            cout << "Erro de realocacao de memoria" << endl;
            free(vetor);

        }

        vetor = vetorAtualizado;
    }
    cout << "Vetor atualizado: ";
    for (int i = 0; i < tamAtualizado; i++) {
        cout << vetor[i] << " | ";
    }

    cout << endl << "Tamanho final do vetor: " << tamAtualizado << endl;
    free(vetor);

    return 0;
}

