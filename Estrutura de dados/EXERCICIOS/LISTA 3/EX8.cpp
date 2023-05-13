#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void matriz_ponteiro(int matriz[3][3]) {
	int temp;
    for (int i=0; i<3; i++) {
       
        for (int j=i+1; j<3; j++) {
				if(matriz[i][j] > matriz[j][i])
				temp = matriz[i][j];
				matriz[i][j] = matriz[i][j];
				matriz[j][i] = temp;
			}  
            
        }
    }


int main() {
    int matriz[3][3], aux[3][3], temp;

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++) {
        	printf("Digite o valor da matriz [%d][%d]: ", i, j);
            scanf("%d ", &matriz[i][j]);
          	printf("\t%d", matriz[i][j]);
        }
    }
    
    matriz_ponteiro(matriz);
}



