#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

        


                
int main(int argc, char** argv) {
	int n,mat[10][10] = { {45,23,21,2,89,65,26,8,96,41},
						{65,74,56,85,21,45,32,52,10,87},
						{45,85,49,73,61,27,19,82,46,77},
						
	};
	int i, j, l, c;
	
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                
                for (l = 0; l < 10; l++) {
                    for (c = 0; c < 10; c++) {
                        
                        if (mat[i][j] < mat[l][c]) {
                            int aux = mat[i][j];
                            mat[i][j] = mat[l][c];
                            mat[l][c] = aux;
                        }
                    }
                }
            }
        }
	return 0;
}