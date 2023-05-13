#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, tv, mt=99, vmt,maiort;
	float soma, media;
	
	cout << "Digite a quantidade de voltas: \n";
	cin >> n;
	
	//estrutura para - ate
	for(int cont=1; cont <= n; cont++){
	cout << "qual tempo volta? \n";
	cin >> tv;	
	
	if(tv<mt){
		mt=tv;
		vmt=cont;
	}
	if (tv > maiort){
		maiort = tv;
	}
	
	soma = soma + tv;
}
media = soma /n;

cout << "Melhor tempo: " << mt << endl;
cout << "Melhor volta: " << vmt << endl;
cout << "Media tempo: " << media << endl;
	return 0;
}
