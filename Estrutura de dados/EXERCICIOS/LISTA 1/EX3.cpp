#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num = 0, vetor[9], valor;
	
	for(int i = 0; i < 10; i++){		
		cout << "Insira um valor inteiro qualquer: ";
		cin >> valor;
		num = num + valor;
		vetor[i] = valor;	
	}
	float media = num/10;
		for(int i = 0; i < 10; i++){
			
			if(vetor[i] == media){
				cout << " A media dos valores e o valor do vetor respectivamente: \n | " << vetor[i] << " | \t" << media << " | \n";
			}else{
				cout << " Os valores nao correspondem   \n | " << vetor[i] << " | \t  " << media << "| \n" ;
			}	
		}
}

