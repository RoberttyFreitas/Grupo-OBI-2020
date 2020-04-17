#include <iostream>

using namespace std;

int vet[1010];

int main(){
	
	int N, aux = 0, j = 0;
	bool mont = true;
	cin >> N;
	
	while(aux < N){
		cin >> vet[aux];
		if(vet[aux] > vet[j]){
			j = aux;
		}
		aux++;
	}
	
	for(int i = j - 1; i >= 0; i--){
		if(vet[i] >= vet[i + 1]){
			mont = false;
		}
	}
	
	for(int i = j + 1; i < N; i++){
		if(vet[i] >= vet[i - 1]){
			mont = false;
		}
	}
	
	if(mont){
		cout << "N" << endl;
	}else{
		cout << "S" << endl;
	}
	
	return 0;
}
