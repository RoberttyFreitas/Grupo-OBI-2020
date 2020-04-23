#include <iostream>

using namespace std;

int vet[12];

int main(){
	
	for(int i = 0; i < 10; i++) cin >> vet[i];
	
	for(int i = 0; i < 10; i++) cout << vet[9 - i] << endl;
	
	return 0;
}
