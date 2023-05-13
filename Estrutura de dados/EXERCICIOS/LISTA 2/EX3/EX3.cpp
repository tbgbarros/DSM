#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
#include <cmath>

using namespace std;

struct ponto {
	double x, y;
};

double calcula_distancia (ponto A, ponto B) { 
	double result;
	result = sqrt(pow(B.x-A.x,2)+pow(B.y-A.y,2));
	return result;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ponto A,B;
	double resultado;
	A.x=2;
	A.y=5;
	B.x=7;
	B.y=10;
	resultado = calcula_distancia(A,B);
	
	cout << "O numero :" << resultado;

}

/* Escreva um programa que calcule a distância entre dois pontos no plano cartesiano. Cada ponto é um 
par (x,y) de reais (double). Escreva uma estrutura para armazenar cada ponto. O cálculo da distância 
deverá ser feita em uma função separada que vai receber os dois pontos (na forma de struct), fazer o 
cálculo e retornar o resultado para ser exibido na main.
DICA: segue o link para saber como é a fórmula da distância de 2 pontos*/

