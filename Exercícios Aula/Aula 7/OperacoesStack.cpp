#include <bits/stdc++.h>

using namespace std;

int main(){
	
	stack<int> pilha;
	
	pilha.push(1);
	pilha.push(7);
	pilha.push(2);
	pilha.push(5);
	
	cout << pilha.size() << endl;
	
	while(!pilha.empty()){
		cout << pilha.top() << " ";
		pilha.pop();
	}
	cout << endl;
	
	return 0;
}

