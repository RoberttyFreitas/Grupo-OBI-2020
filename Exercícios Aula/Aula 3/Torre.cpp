#include <iostream>

using namespace std;

int matriz[1010][1010];
int soma_linha[1010];
int soma_coluna[1010];

int main(){
	
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> matriz[i][j];
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			soma_linha[i] += matriz[i][j];
		}
	}
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			soma_coluna[i] += matriz[j][i];
		}
	}
	
	int valor_max = -1;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			valor_max = max(valor_max, soma_linha[i] + soma_coluna[j] - 2 * matriz[i][j]);
		}
	}
	
	cout << valor_max << endl;
	
	return 0;
}
