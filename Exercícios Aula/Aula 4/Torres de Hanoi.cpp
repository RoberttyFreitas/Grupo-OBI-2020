#include <iostream>

using namespace std;

int Hanoi(int n){
	if(n == 1) return 1;
	return 2 * Hanoi(n - 1) + 1;
}

int main(){
	
	int n, aux = 1;
	
	while(true){
		cin >> n;
		if(n == 0) break;
		cout << "Teste " << aux << endl;
		cout << Hanoi(n) << endl;
		cout << endl;
		aux++;
	}
	
	return 0;
}
