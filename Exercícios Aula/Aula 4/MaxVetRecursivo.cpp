#include <iostream>

using namespace std;

int vetor[1000];


int maxVetor(int n){
	if(n == 0) return vetor[0];
	return max(maxVetor(n - 1), vetor[n]);
}

int main(){
	
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> vetor[i];
	}
	
	cout << maxVetor(n - 1) << endl;
	
	return 0;
}
