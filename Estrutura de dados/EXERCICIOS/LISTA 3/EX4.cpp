#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void exibir(char* arr, int tamanho){
	char* ptr;
	ptr = arr;
	for(int i=0; i<tamanho; i++){
		cout << *ptr;
		ptr++;
	}
}

int main(){

	char arr[60];
	char* nome1="Luis";
	char* nome2="Fernando";
	
	char* nome3="Vitoria";
	char* nome4="Leticia";	

    strcat(arr,nome1);
    strcat(arr," ");
    strcat(arr,nome2);
    strcat(arr," ");
    strcat(arr,nome3);
    strcat(arr," ");
    strcat(arr,nome4);
    strcat(arr," ");	    

    int tamanho = strlen(arr);
    exibir(arr,tamanho);    
}


