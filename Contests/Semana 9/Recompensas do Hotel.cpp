#include <bits/stdc++.h>

using namespace std;

int N, K, aux;

vector<int> P;
priority_queue< int, vector<int>, greater<int> > fila;

int main(){
	
	cin >> N >> K;
	
	long long int acum = 0ll;
	int aux;
	
	for(int i = 0; i < N; i++){
		cin >> aux;
		P.push_back(aux);
		acum += aux;
	}
	
	for(int i = K; i < N; i += K + 1){
		fila.push(P[i]);
		for(int j = i + 1; j < min(N, i + K + 1); j++){
			if(P[j] > fila.top()){
				fila.pop();
				fila.push(P[j]);
			}
		}
	}
	
	while(!fila.empty()){
		acum -= fila.top();
		fila.pop();
	}
	
	cout << acum << endl;
	
	return 0;
}
