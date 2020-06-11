#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

vector<int> v[MAXN];

bool resultado = true;

int solve(int i){
	
	int tamanho = 0, aux;
	int tamanho_arvore = 1;
	
	for(int j = 0; j < (int) v[i].size(); j++){
		if(j == 0){
			tamanho = solve(v[i][j]);
			tamanho_arvore += tamanho;
		}else{
			aux = solve(v[i][j]);
			tamanho_arvore += aux;
			if(aux != tamanho) resultado = false;
		}
	}
	
	return tamanho_arvore;
}

int main(){
	
	int N, x, y;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> x >> y;
		v[y].push_back(x);
	}
	
	solve(0);
	
	if(resultado){
		cout << "bem" << endl;
	}else{
		cout << "mal" << endl;
	}
	
	return 0;
}
