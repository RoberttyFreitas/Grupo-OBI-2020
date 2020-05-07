#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int T;
	string s;
	
	cin >> T;
	
	while(T--){
		stack<char> pilha;
		cin >> s;
		bool resp = true;
		for(int i = 0; i < ((int) s.size()); i++){
			if(s[i] == '{' or s[i] == '[' or s[i] == '('){
				pilha.push(s[i]);
			}else{
				if(pilha.empty()){ 
					resp = false;
					break;
				}
				if((pilha.top() == '(' and s[i] != ')') or (pilha.top() == '[' and s[i] != ']') or (pilha.top() == '{' and s[i] != '}')){
					resp = false;
					break;
				}else{
					pilha.pop();
				}
			}
		}
		
		if(resp and (pilha.empty())){
			cout << "S" << endl;
		}else{
			cout << "N" << endl;
		}
		
	}
	
	return 0;
}
