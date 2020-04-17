#include <iostream>

using namespace std;

int cont[12];

int main(){
	
	int N;
	int aux;
	
	cin >> N;
	
	while(N--){
		cin >> aux;
		
		cont[aux % 10]++;
		aux /= 10;
		
		while(aux != 0){
			cont[aux % 10]++;
			aux /= 10;
		}
	}
	
	for(int i = 0; i < 10; i++){
		cout << i << " - " << cont[i] << endl; 
	}
	
	return 0;
}
