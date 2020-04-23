#include <iostream>

using namespace std;

int vetor[100100];
int soma_acum[100100];

int main(){
	
	int N, k = 0;
	
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		cin >> vetor[i];
	}
	
	for(int i = 1; i <= N; i++){
		soma_acum[i] = soma_acum[i - 1] + vetor[i];
	}
	
	int soma_total = soma_acum[N];
	
	for(int i = 1; i <= N; i++){
		if(soma_acum[i] == (soma_total - soma_acum[i])){
			k = i;
			break;
		}
	}
	
	cout << k << endl;
	
	return 0;
}
