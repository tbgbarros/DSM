#include <iostream>
using namespace std;

int main() {
   int n, t1 = 0, t2 = 1, t_next = 0;

    for (int i = 1; i <= 15; ++i) {
        if(i == 1) {
            cout << " | " << t1 << " | ";
        }
        if(i == 2) {
            cout << t2 << " | ";
        }
	        t_next = t1 + t2;
	        t1 = t2;
	        t2 = t_next;
	        cout << t_next << " | ";
    }
    return 0;
}

