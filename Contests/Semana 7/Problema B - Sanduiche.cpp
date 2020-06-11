#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, D, aux;
	int resultado = 0, resultado_parcial = 0;
	long long int acum = 0;
	queue<int> lista;
	queue<int> lista1;
	cin >> N >> D;
	vector<int> v(2 * N);
	
	for(int i = 0; i < N; i++){
		cin >> aux;
		v[i] = aux;
		v[N + i] = aux;
	}
	
	for(int i = 0; i < N; i++){
		aux = v[i];
		
		if(aux > D){
			while(!lista1.empty()) lista1.pop();
			acum = 0;
			continue;
		}
		
		while((acum + aux) > D){
			acum -= lista1.front();
			lista1.pop();
		}
		
		if((acum +  aux) < D){
			lista1.push(aux);
			acum += aux;
		}else if((acum +  aux) == D){
			resultado_parcial++;
			lista1.push(aux);
			acum += aux;
			acum -= lista1.front();
			lista1.pop();
		}
		
	}
	
	acum = 0;
	
	for(int i = 0; i < 2 * N; i++){
		aux = v[i];
		
		if(aux > D){
			while(!lista.empty()) lista.pop();
			acum = 0;
			continue;
		}
		
		while(((acum + aux) > D) or ((int) lista.size() >= N)){
			acum -= lista.front();
			lista.pop();
		}
		
		if((acum +  aux) < D){
			lista.push(aux);
			acum += aux;
		}else if((acum +  aux) == D){
			resultado++;
			lista.push(aux);
			acum += aux;
			acum -= lista.front();
			lista.pop();
		}
	}
	
	
	cout << resultado - resultado_parcial << endl;
	
	return 0;
}
