#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int C, N, T, D, resultado = 0;
	
	queue< pair<int, int> > clientes;
	
	cin >> C >> N;
	
	vector<int> caixas(C);
	
	for(int i = 0; i < N; i++){
		cin >> T >> D;
		clientes.push(make_pair(T, D));
	}
	
	for(int i = 0; i < C; i++){
		caixas[i] = 0;
	}
	
	while(!clientes.empty()){
		pair<int, int> cliente = clientes.front();
		clientes.pop();
		int m_caixa = 0;
		for(int i = 1; i < C; i++){
			if(caixas[i] < caixas[m_caixa]){
				m_caixa = i;
			}
		}
		if((caixas[m_caixa] - cliente.first) > 20){
			resultado++;
		}
		caixas[m_caixa] = max(caixas[m_caixa], cliente.first) + cliente.second; 
	}
	
	cout << resultado << endl;
	
	return 0;
}
