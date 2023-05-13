#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calculo(int, int,int,int);

int calculo(int num1, int num2, int num3, int num4){
	int soma;	
	soma = (float)(num1*3)+(num2*num2) + (num3*num3) + (num4*num4);
	return (soma);
}

int main() {
	int cont = 0, num1, num2, num3, num4;
	float resultado;
	
	cout << "Insira um valor 1: ";
	cin >> num1;
	cout << "Insira um valor 2: ";
	cin >> num2;
	cout << "Insira um valor 3: ";
	cin >> num3;
	cout << "Insira um valor 4: ";
	cin >> num4;
	
	resultado = calculo(num1,num2,num3,num4);
	
	printf("%.2f",resultado);
}

