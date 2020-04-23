#include <iostream>

using namespace std;

int vetor[12];

int main(){
	
	int menor = 1000;
	
	for(int i = 0; i < 10; i++){
		cin >> vetor[i];
		menor = min(menor, vetor[i]);
	}
	
	cout << "Menor: " << menor << endl;
	cout << "Ocorrencias: ";
	
	for(int i = 0; i < 10; i++){
		if(vetor[i] == menor){
			cout << i << " ";
		}
	}
	cout << endl;
	
	for(int i = 0; i < 10; i++){
		if(vetor[i] == menor){
			cout << "-1 ";
		}else{
			cout << vetor[i] << " ";
		}
	}
	cout << endl;
	
	return 0;
}
