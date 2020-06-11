#include <bits/stdc++.h>

using namespace std;

#define MAXV 100100

int v[MAXV];

bool busca(int i, int j, int valor){
	if(i == j){
		return v[i] == valor;
	}
	int m = (i + j) / 2;
	if(v[m] < valor){
		return busca(m+1, j, valor);
	}else if(v[m] > valor){
		return busca(i, m, valor);
	}else{
		return true;
	}
}

int main(){
	
	int N, K;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	cin >> K;
	
	for(int i = 0; i < N; i++){
		if(busca(0, N-1, K - v[i])){
			cout << v[i] << " " << K - v[i] << endl;
			break;
		}
	}
	
	return 0;
}
