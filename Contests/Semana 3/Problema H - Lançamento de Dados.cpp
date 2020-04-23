#include <iostream>

using namespace std;

int qtd[15];

int main(){
	
	int N, aux, qtd_max = 0;
	
	cin >> N;
	
	while(N--){
		cin >> aux;
		qtd[aux]++;
	}
	
	for(int i = 1; i < 13; i++){
		qtd_max = max(qtd_max, qtd[i]);
	}
	
	for(int i = 1; i < 13; i++){
		if(qtd_max == qtd[i]) cout << i << " ";
	}
	
	cout << endl;
	
	return 0;
}
