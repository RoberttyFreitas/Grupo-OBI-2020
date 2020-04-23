#include <iostream>

using namespace std;


int valores_sorteados[100];
int resultado[100];

int main(){
	
	int N, B;
	
	while(true){
		
		cin >> N >> B;
		
		if(N == 0 && B == 0) break;
		
		for(int i = 0; i < 100; i++) resultado[i] = 0;
		
		for(int i = 0; i < B; i++) cin >> valores_sorteados[i];
		
		for(int i = 0; i < B; i++){
			for(int j = 0; j < B; j++){
				resultado[abs(valores_sorteados[i] - valores_sorteados[j])] = 1;
			}
		}
		
		bool resp = true;
		
		for(int i = 0; i <= N; i++){
			if(resultado[i] != 1){
				resp = false;
				break;
			}
		}
		
		if(resp){
			cout << "Y" << endl;
		}else{
			cout << "N" << endl;
		}
		
	}
	
	
	return 0;
}
