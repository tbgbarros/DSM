#include <iostream>
using namespace std;

int main()
{

    int na, nb, n, a, b, soma, soma2, somav, subv;

    int vetor1[3];

    for (int a = 0; a < 3; a++)
    {
        cout << "Insira o valor dos indices do A: ";
        cin >> vetor1[a];
    }

    for (int a = 0; a < 3; a++)
    {
        cout << vetor1[a] << "\n";
    }

    for (int a = 0; a < 3; a++)
    {
        soma = soma + vetor1[a];
    }

    cout << "a soma dos indices do vetor A e " << soma << "\n";

    cout << "///////////////////////////////////////////////////"
         << "\n";

    int vetor2[3];

    for (int b = 0; b < 3; b++)
    {
        cout << "Insira o valor dos indices do B:  ";
        cin >> vetor2[b];
    }

    for (int b = 0; b < 3; b++)
    {
        cout << vetor2[b] << "\n";
    }

    for (int b = 0; b < 3; b++)
    {
        soma2 = soma2 + vetor2[b];
    }

    cout << "a soma dos indices do vetor B e " << soma2 << "\n";

    cout << "///////////////////////////////////////////////////"
         << "\n";

    int vetor3[3];

    //	for (int somav=0; somav<3; somav++){
    //		vetor3[somav] = vetor3[somav] = vetor1[somav] = vetor2[somav];       por algum motivo nao estava dando certo, farei da forma mais longa :(
    //
    //	for (int somav=0; somav<3; somav++){
    //		cout << vetor3[somav] << "\n";
    //	}

    vetor3[0] = vetor1[0] + vetor2[0];
    vetor3[1] = vetor1[1] + vetor2[1];
    vetor3[2] = vetor1[2] + vetor2[2];

    for (int somav = 0; somav < 3; somav++)
    {
        cout << vetor3[somav] << "\n";
    }

    cout << " acima sao os indices do vetor c que e a soma do vetor A com B  "
         << "\n";
    cout << "///////////////////////////////////////////////////"
         << "\n";

    int vetor4[3];

    vetor4[0] = vetor1[0] - vetor2[0];
    vetor4[1] = vetor1[1] - vetor2[1];
    vetor4[2] = vetor1[2] - vetor2[2];

    for (int subv = 0; subv < 3; subv++)
    {
        cout << vetor4[subv] << "\n";
    }

    cout << " acima sao os indices do vetor D que e a subtracao do vetor A menos B  "
         << "\n";
    cout << "///////////////////////////////////////////////////"
         << "\n";

    return 0;
}