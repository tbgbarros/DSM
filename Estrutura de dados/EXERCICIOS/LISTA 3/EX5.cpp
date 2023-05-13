#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


int main() {
	int count = 30, *temp, sum = 2;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout << " count = " << count << " *temp = " << *temp << " sum = " << sum;
}

/* RESPOSTA 

resposta - o temp recebe os 30 da cout, depois temp recebe 20,
 depois tanto a sum quanto a count recebe a temp que é 20, 
 deixando todos com 20.

*/
