#include <iostream>

using namespace std;

int vet[52];
int resp[52];
int N;

int main(){
	
	int aux = 0;
	cin >> N;
	
	while(aux < N){
		cin >> vet[aux];
		aux++;
	}
	
	for(int i = 0; i < N; i++){
		if(i > 0) resp[i] += vet[i - 1];
		if(i < N - 1) resp[i] += vet[i + 1];
		resp[i] += vet[i];
	}
	
	for(int i = 0; i < N; i++){
		cout << resp[i] << endl;
	}
	
	return 0;
}
