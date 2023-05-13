#include <iostream>
#include <cstdlib>
#include <string.h>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Ponto{
	double x, y;
	
};

double distancia(Ponto A, Ponto B){
	
	double result, dif1, dif2;
	dif1 = pow(B.x - A.x,2);
	dif1 = pow(B.y - A.y,2);
	
	result = sqrt(dif1+dif2);
	cout << result;
	return result;
}

int main() {
	Ponto A,B;
	double resultado;
	
	cout << "Insira o valor do PONTO A x  \n" ;
	cin >> A.x;
	cout << " Insira o valor do PONTO A y";
	cin >> A.y;
	
	
	cout << "Insira o valor do PONTO B x \n" ;
	cin >> B.x;
	cout << "Insira o valor do PONTO B y \n";
	cin>> B.y;
	resultado = distancia(A,B);
	cout << "O resultado da distancia dos pontos e: " << resultado;
	}
	

