/*
	Exercicio de revis�o 1:
	Fazer um programa que vai pegar os n�meros de 1 a 100 e verificar
	se � par ou impar. Os n�meros pares ser�o inseridos em um vetor e 
	os n�meros impares ser�o inseridos em outro vetor. Depois exibir os 
	dois vetores.
*/

#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;

main(){
	// para definir a gramatica da lingua portuguesa
	setlocale(LC_ALL, "Portuguese");
	int i=0, p=0, imp=0;
	int par[50], impar[50];
	
	for(i=0;i<100;i++)
	{
		if(i%2==0)
		{
			par[p] = i;
			p++;
		}
		else if(i%2!=0)
		{
			impar[imp] = i;
			imp++;
		}
	}
	
	cout  << endl << "Numeros pares: " << endl;
	for(int j=0; j<50; j++)
	{
		cout << par[j] << " ";
	}
	
	cout  << endl << "Numeros impares: " << endl;
	for(int j=0; j<50; j++)
	{	
		cout << impar[j] << " ";
	}	
}

