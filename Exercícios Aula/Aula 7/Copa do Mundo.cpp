#include <bits/stdc++.h>

using namespace std;

int main(){
	
	queue<char> fila;
/*
	fila.push("A");
	fila.push("B");
	fila.push("C");
	fila.push("D");
	fila.push("E");
	fila.push("F");
	fila.push("G");
	fila.push("H");
	fila.push("I");
	fila.push("J");
	fila.push("K");
	fila.push("L");
	fila.push("M");
	fila.push("N");
	fila.push("O");
	fila.push("P");
*/
	for(char c = 'A'; c <= 'P'; c++){
		fila.push(c);
	}
	
	int N, M;
	char t1, t2;
	
	while(((int) fila.size()) > 1){
		cin >> N >> M;
		t1 = fila.front();
		fila.pop();
		t2 = fila.front();
		fila.pop();
		if(N > M){
			fila.push(t1);
		}else{
			fila.push(t2);
		} 
	}
	
	cout << fila.front() << endl;
	
	return 0; 
}
