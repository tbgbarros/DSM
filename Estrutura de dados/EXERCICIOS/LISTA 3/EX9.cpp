#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int tamanhofrase(char* texto1, char* texto2){
	int caracter,var1;
	var1 = strcmp(texto1, texto2);
	
    if(var1 == 0){
        caracter = strlen(texto1);
        return caracter;
    }else if(var1 == -1){
        caracter = strlen(texto1);
        return caracter;
    }else if(var1 == 1){
        caracter = strlen(texto2);
        return caracter;
    }
}


int main(void) {
	char texto1[50], texto2[50], var1[50], *ptr;
    int total_tamanho;
    ptr = texto1;
    
    cout << "Insira a frase 1: ";
    //gets inseguro mais nao rodou com cin
    gets (texto1);
    total_tamanho = strlen(texto1);
    
    for(int i=0; i<total_tamanho; i++){
    	if(ptr[i] == ' '){
    		total_tamanho--;
		}
	}
	cout << "Tamanho 1:  " << total_tamanho << endl;
	
	//separado frase 1 da 2 pra incorporar total_tamanho
	cout << "Insira a frase 2: ";
    gets (texto2);

    total_tamanho = strlen(texto2);
    cout << "Tamanho 2: " << total_tamanho << endl;
    strcpy(var1, texto2);


    total_tamanho = tamanhofrase(texto1,texto2);
    cout << "Tamanho da maior frase: " << total_tamanho;
	
}
