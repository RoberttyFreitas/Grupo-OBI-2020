#include <iostream>

using namespace std;

int vetM[10100];
int vetN[10100];
int resultado[10100];

int main(){
	
	int N, M, carry = 0, tam = 0;
	
	cin >> M >> N;
	
	for(int j = 1; j <= M; j++){
		cin >> vetM[j];
	}
	
	for(int j = 1; j <= N; j++){
		cin >> vetN[j];
	}
	
	for(int j = max(N, M); j >= 0; j--){
		if(vetM[j] == 0 && vetN[j] == 0){
			resultado[j] = carry;
			carry = 0;
		}else if(vetM[j] == 1 && vetN[j] == 0){
			if(carry == 1) resultado[j] = 0;
			else resultado[j] = 1;
		}else if(vetM[j] == 0 && vetN[j] == 1){
			if(carry == 1) resultado[j] = 0;
			else resultado[j] = 1;
		}else{
			if(carry == 1) resultado[j] = 1;
			else{ 
				resultado[j] = 0;
				carry = 1;
			}
		}
	}
	
	for(int j = 1; j <= max(N,M); j++) if(resultado[j]) tam = j;
	
	for(int j = 0; j <= tam; j++){
		if(j == 0 && resultado[j] == 0) continue;
		cout << resultado[j] << " ";
	}
	
	cout << endl;
	
	return 0;
}
