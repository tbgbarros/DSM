#include <iostream>
#include <cstdlib>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1 = 1,  num2 = 1;	
	
	cout << "Tabuadas: \n \n";
	while(num1 <= 10 ){	
		while(num2 <= 10){
			int total = num2 * num1;			
			cout << num2 << "X" << num1 << ":" << total<< "\t";
			num2++;
		}		
		cout << "\n";		
		num1++;
		num2 = 1;		
	}
}
