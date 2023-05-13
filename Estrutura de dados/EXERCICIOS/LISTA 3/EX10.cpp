#include <iostream>
#include <cstdlib>
#include <cstring>
#include <locale>
using namespace std;

int main() {
	float num1[10],var1,*ptr=NULL,aux;
    ptr=num1;
    
	for(int i=0; i<10; i++){
		cout <<"Referencia | "<< i+1 << " | " << " numero: ";
		cin >>*ptr;
		ptr++;
	}
	ptr = num1;
 	//parte sort pego na internet
    for(int i = 0; i<10; i++){
        for(int j = 0; j < 9; j++){
            if(ptr[j] > (ptr[j+1])){
            aux = ptr[j];
            ptr[j] = ptr[j+1];
            ptr[j+1] = aux;
        }
    }
}
	ptr = num1;
	
	//Insercao dos numeros
	cout << "\nNumero da busca: ";
	cin >> var1;
	cout << endl;
	for(int i=0; i<10; i++){
		if(var1 == *ptr){
			cout << "------------------------------------\n";
			cout << "ID: |" << i+1 << " | ---Encontrado--- | "<< *ptr<< endl;
			cout << "\n------------------------------------\n";
		}
		else{
			cout << "ID: |" << i+1 <<" | Nao Encontrado";
		}
		 cout << "ID: |" << i+1 << " | Numeros: " << *ptr << " | " << endl;
		 ptr++;
    }
}

