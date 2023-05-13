#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
using namespace std;

int main() {
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	
	cout << inx;
}

/*3 - RESPOSTAS
A - SIM
B - 20
C - Esta apontando pra ultima posição do vetor.*/
