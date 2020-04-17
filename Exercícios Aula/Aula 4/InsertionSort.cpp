#include <iostream>

using namespace std;

int vetor[1000000];

int main(){
	
	int N, aux;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> vetor[i];
	}
	
	/* Insertion Sort */
	
	for(int i = 0; i < N; i++){
		for(int j = i - 1; j >= 0; j--){
			if(vetor[j + 1] < vetor[j]){
				aux = vetor[j + 1];
				vetor[j + 1] = vetor[j];
				vetor[j] = aux;
			}else{
				break;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		cout << vetor[i] << " ";
	}
	cout << endl;
	
	return 0;
}
