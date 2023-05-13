#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
using namespace std;

struct atletas{
	char nome[30], posicao[30];
	int idade;
	float altura;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	atletas jogador[2];
	int i;
	float maior, velho;
	char nomealto[30],idadevelho[30];
	
	
	cout << "Coloque os dados de atletas \n";
	for (int i=0; i<2; i++ ){
		cout << "\nDigite o nome do atleta: ";
		cin >> jogador[i].nome;
		
		cout << "\nDigite a posicao do atleta: ";
		cin >> jogador[i].posicao;
		
		cout << "\nDigite a idade do atleta: ";
		cin >> jogador[i].idade;
		
		cout << "\nDigite a altura do atleta: ";
		cin >> jogador[i].altura;			
	}
	maior = jogador[0].altura;
	
	for(i=0; i<2; i++){
		if (jogador[i].altura >= maior){
			maior = jogador[i].altura;
			strcpy (nomealto, jogador[i].nome);
		}
	}
	cout << "O nome do atleta mais alto e "	<< nomealto << " a altura " << maior << endl;
	
	velho = jogador[0].idade;
		for(i=0; i<2; i++){
			if (jogador[i].idade >= velho){
				velho = jogador[i].idade;
				strcpy (idadevelho, jogador[i].nome);
				}
		}
cout << "O nome do atleta mais velho e "	<< idadevelho << " e mais velho " << velho << endl;
	
}
