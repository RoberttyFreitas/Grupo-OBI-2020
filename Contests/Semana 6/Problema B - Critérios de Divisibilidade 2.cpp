#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string N;
	
	cin >> N;
	
	int ultimos_digitos = (int) (N[N.size() - 1] - '0');
	if(((int) N.size()) > 1) ultimos_digitos += (int) 10 * (N[N.size() - 2] - '0');
	
	int soma_digitos = 0;
	
	for(int i = 0; i < (int) N.size(); i++){
		soma_digitos += (int) (N[i] - '0');
	}
	
	if(ultimos_digitos % 4 == 0){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	if(soma_digitos % 9 == 0){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	if(ultimos_digitos % 25 == 0){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
