#include <iostream>
using namespace std;

int main() {
	
	int n;
	
	cout << " Inserisci n : ";
	cin >> n;
	
	if (n%2 == 0) {
		
		cout << endl << " N e' Pari";
	}
	else {
		
		cout << endl << " N e' Dispari";
	};
		
	return 0;
}
