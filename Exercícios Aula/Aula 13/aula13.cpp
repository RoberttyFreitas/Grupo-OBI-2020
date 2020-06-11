#include <bits/stdc++.h>

using namespace std;

#define MAXV 100100

vector<int> lista_adjacencia[MAXV];

bool result = true;

int DFS(int i){
	
	int numero_pecas = 1;
	int pecas = 0, aux;
	
	for(int j = 0; j < (int) lista_adjacencia[i].size(); j++){
		if(j == 0){
			pecas = DFS(lista_adjacencia[i][j]);
			numero_pecas += pecas;
		}else{
			aux = DFS(lista_adjacencia[i][j]);
			if(aux != pecas){
				result = false;
			}
			numero_pecas += aux;
		}
		
	}
	
	return numero_pecas;
}

int main(){
	
	int N;
	int a, b;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> a >> b;
		lista_adjacencia[b].push_back(a);
	}
	
	DFS(0);
	
	if(result){
		cout << "bem" << endl;
	}else{
		cout << "mal" << endl;
	}
	
	return 0;
}
