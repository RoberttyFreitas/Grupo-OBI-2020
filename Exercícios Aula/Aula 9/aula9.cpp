#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, M, resposta = 0, aux;
	
	cin >> N >> M;
	
	vector<int> v(N);
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	for(int i = 0; i < N-1; i++){
		if(v[i] < M){
			aux = M - v[i];
			v[i] += aux;
			v[i + 1] += aux;
		}else{
			aux = v[i] - M;
			v[i] -= aux;
			v[i + 1] -= aux;
		}
		resposta += aux;
	}
	
	cout << resposta << endl;
	
	return 0;
}
