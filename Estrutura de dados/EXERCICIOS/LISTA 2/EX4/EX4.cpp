#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
#include <cmath>

using namespace std;

struct ponto {
	double x, y;
};

double calcula_distancia(ponto lad1, ponto lad2) { 
	double result;
	result = sqrt(pow(lad1.x-lad2.x,2)+pow(lad1.y-lad2.y,2));
	return result;
}

void distancia(ponto A, ponto B, ponto C, ponto D, ponto E, ponto F) { 
	double var1,var2,var3;

	
	var1 = calcula_distancia(A,B);
	var2 = calcula_distancia(B,C);
	var3 = calcula_distancia(A,C);
	
	if(var1 == var2 && var1 == var3 && var2 == var3){
			cout << "\nTriangulo 1 equilatero\n";
			}else if(var1 != var3 && var1 != var2 && var3 != var2){
				cout << "\nTriangulo 1 escaleno\n";
			}else{
				cout << "\nTriangulo 1 isoceles\n";	
			}
		
	//triangulo2
	var1 = calcula_distancia(D,E);
	var2 = calcula_distancia(E,F);
	var3 = calcula_distancia(D,F);
	
	if(var1 == var2 && var1 == var3 && var2 == var3){
			cout << "\nTriangulo 2 equilatero\n";
			}else if(var1 != var3 && var1 != var2 && var3 != var2){
				cout << "\nTriangulo 2 escaleno\n";
			}else{
				cout << "\nTriangulo 2 isoceles\n";	
			}
			
}

int main(int argc, char** argv) {
	ponto A,B,C,D,E,F;
	
/*	for(int i=0; i<6; i++){*/
		cout << "\nInsira os dados de A: ";
		cin >> A.x;
		cout << "\nInsira os dados de A: ";
		cin >> A.y;

		cout << "\nInsira os dados de B: ";
		cin >> B.x;
		cout << "\nInsira os dados de B: ";
		cin >> B.y;
		
		cout << "\nInsira os dados de C: ";
		cin >> C.x;
		cout << "\nInsira os dados de C: ";
		cin >> C.y;	
		
		cout << "\nInsira os dados de D: ";
		cin >> D.x;
		cout << "\nInsira os dados de D: ";
		cin >> D.y;	
		
		cout << "\nInsira os dados de E: ";
		cin >> E.x;
		cout << "\nInsira os dados de E: ";
		cin >> E.y;	

		cout << "\nInsira os dados de F: ";
		cin >> F.x;
		cout << "\nInsira os dados de F: ";
		cin >> F.y;			
	
	distancia(A, B, C, D, E, F);														
	}
		



/* Escreva um programa que calcule a distância entre dois pontos no plano cartesiano. Cada ponto é um 
par (x,y) de reais (double). Escreva uma estrutura para armazenar cada ponto. O cálculo da distância 
deverá ser feita em uma função separada que vai receber os dois pontos (na forma de struct), fazer o 
cálculo e retornar o resultado para ser exibido na main.
DICA: segue o link para saber como é a fórmula da distância de 2 pontos*/

