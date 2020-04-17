#include <iostream>

using namespace std;

int matriz[100][100];

int main(){
	
	int N;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> matriz[i][j];
		}
	}
	
	bool quadrado_magico = true;
	
	int valor = 0;
	for(int i = 0; i < N; i++){
		valor += matriz[0][i];
	}
	
	for(int i = 0; i < N; i++){
		int valor_linha = 0;
		for(int j = 0; j < N; j++){
			valor_linha += matriz[i][j];
		}
		if(valor_linha != valor){
			quadrado_magico = false;
		}
	}
	
	for(int i = 0; i < N; i++){
		int valor_coluna = 0;
		for(int j = 0; j < N; j++){
			valor_coluna += matriz[j][i];
		}
		if(valor_coluna != valor){
			quadrado_magico = false;
		}
	}
	
	int valor_diagonal_prin = 0;
	for(int i = 0; i < N; i++){
		valor_diagonal_prin += matriz[i][i];
	}
	
	if(valor_diagonal_prin != valor){
		quadrado_magico = false;
	}
	
	int valor_diagonal_sec = 0;
	for(int i = 0; i < N; i++){
		valor_diagonal_sec += matriz[N - 1 - i][i];
	}
	
	if(valor_diagonal_sec != valor){
		quadrado_magico = false;
	}
	
	if(quadrado_magico){
		cout << valor << endl;
	}else{
		cout << "-1" << endl;
	}
	
	return 0;
}
