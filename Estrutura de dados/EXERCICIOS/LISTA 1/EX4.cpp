#include <iostream>
#include <cstdlib>
using namespace std;

string pergunta,resposta;

string rotina(){
    if (pergunta == "nao"|| pergunta =="Nao" || pergunta == "NAO"){
    	cout << "\n Numero e 0 "<< endl; 
		resposta = "0";
	}else if(pergunta == "sim"|| pergunta == "Sim"|| pergunta == "SIM"){
	    cout << "\n Entao o numero e 1 "<< endl;
	    resposta = "1";
	}else{ 
	 cout << "\n Reposta incorreta " << endl;
	}  	
}

int main(){	
	cout << "\n Responda | SIM | ou | NAO |: ";
	cin >> pergunta;
	cout << rotina();
}
