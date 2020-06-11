#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string entrada = "", aux;
	
	int N;
	
	cin >> N;
	
	getline(cin, aux);
	entrada += aux;
	
	while(N--){
		getline(cin, aux);
		entrada += aux;
	}
	
	stack<char> pilha;
	bool res = true;
	
	for(int i = 0; i < (int) entrada.size(); i++){
		if(entrada[i] == '{'){
			pilha.push(entrada[i]);
		}else if(entrada[i] == '}'){
			if(pilha.empty()){
				res = false;
				break;
			}else{
				pilha.pop();
			}
		}
	}
	
	if(res and pilha.empty()){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
