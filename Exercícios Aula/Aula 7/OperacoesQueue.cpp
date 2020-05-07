#include <bits/stdc++.h>

using namespace std;

int main(){
	
	queue<int> fila;
	
	fila.push(1);
	fila.push(7);
	fila.push(2);
	fila.push(5);
	
	cout << fila.size() << endl;
	
	while(!fila.empty()){
		cout << fila.front() << " ";
		fila.pop();
	}
	cout << endl;
	
	return 0;
}
