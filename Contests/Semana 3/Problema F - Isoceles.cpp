#include <iostream>

using namespace std;

int vetor[50100];
int vetor_parcial_1[50100];
int vetor_parcial_2[50100];

int main(){
	
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> vetor[i];
		vetor_parcial_1[i] = 1;
		vetor_parcial_2[i] = 1;
	}
	
	for(int i = 1; i < N; i++){
		if(vetor[i] >= (vetor_parcial_1[i - 1] + 1)){
			vetor_parcial_1[i] = vetor_parcial_1[i - 1] + 1;
		}else{
			vetor_parcial_1[i] = vetor[i];
		}
	}
	
	for(int i = N - 2; i >= 0; i--){
		if(vetor[i] >= (vetor_parcial_2[i + 1] + 1)){
			vetor_parcial_2[i] = vetor_parcial_2[i + 1] + 1;
		}else{
			vetor_parcial_2[i] = vetor[i];
		}
	}
	
	int tam_max = 0;
	for(int i = 0; i < N; i++){
		tam_max = max(tam_max, min(vetor_parcial_1[i], vetor_parcial_2[i]));
	}
	
	cout << tam_max << endl;
	
	return 0;
}
