#include <bits/stdc++.h>

using namespace std;

int main(){

	string N;
	int D, n, result;

	while(1){
		cin >> n >> D;
		if(n == 0 && D == 0) break;
		cin >> N;
		stack<int> pilha;
		stack<int> fila;
		for (int i = 0; i < n; i++){
			if(!(pilha.empty()) && (D > 0)){
				while(!(pilha.empty()) && (pilha.top() < (N[i] - '0')) && (D > 0)) {
					pilha.pop();
					D--;
				}
				pilha.push(N[i] - '0');
			}else{
				pilha.push(N[i] - '0');
			}
		}
		while(D > 0){
			pilha.pop();
			D--;
		}
		while(!pilha.empty()){
			fila.push(pilha.top());
			pilha.pop();
		}
		while(!fila.empty()){
			cout << fila.top();
			fila.pop();
		}
		cout << endl;
	}

	return 0;
}
