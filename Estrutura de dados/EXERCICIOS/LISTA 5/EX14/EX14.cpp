#include <iostream>
#include <string>

using namespace std;

string Reverter(string texto) {
    if (texto.length() == 0) {
        return texto;
    } else {
        return Reverter(texto.substr(1)) + texto[0];
    }
}

int main() {
    string texto;
    cout << "Digite o texto: ";
    getline(cin, texto);
    cout << "Texto invertido: " << Reverter(texto) << endl;
    return 0;
}
