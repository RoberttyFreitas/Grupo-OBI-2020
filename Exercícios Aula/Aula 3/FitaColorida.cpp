#include <iostream>

using namespace std;

int fita[10100];
int resposta[10100];

int main(){
	
	int N;
	int aux = 0;
	
	cin >> N;
	
	while(aux < N){
		cin >> fita[aux];
		aux++;
	}
	
	for(int i = 0; i < N; i++){
		int dif = N + 2;
		for(int j = 0; j < N; j++){
			if(fita[j] == 0){
				dif = min(dif, abs(i - j));
			}
		}
		resposta[i] = min(dif, 9);
	}
	
	for(int i = 0; i < N; i++){
		cout << resposta[i] << " ";
	}
	cout << endl;
	
	return 0;
}
