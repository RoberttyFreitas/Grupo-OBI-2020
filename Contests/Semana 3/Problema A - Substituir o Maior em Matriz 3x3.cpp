#include <iostream>

using namespace std;

int matriz[4][4];

int main(){
	
	int maior;
	
	cin >> matriz[0][0];
	
	maior = matriz[0][0];
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(i == 0 && j == 0) continue;
			cin >> matriz[i][j];
			maior = max(maior, matriz[i][j]);
		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(matriz[i][j] == maior){
				cout << "-1 " ;
			}else{
				cout << matriz[i][j] << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
