#include <iostream>

using namespace std;

int matriz[100][100];

int main(){
	
	int N, Q, resultado = 0;
	int Li, Lf, Ci, Cf;
	
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		for(int j = 1; j <= N; j++){
			cin >> matriz[i][j];
		}
	} 
	
	cin >> Q;
	
	while(Q--){
		cin >> Li >> Ci >> Lf >> Cf;
		for(int i = Li; i <= Lf; i++){
			for(int j = Ci; j <= Cf; j++){
				resultado += matriz[i][j];
				matriz[i][j] = 0;
			}
		}
	}
	
	cout << resultado << endl;
	
	return 0;
}
