#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string N;
	
	cin >> N;
	
	int soma_digitos = 0;
	
	for(int i = 0; i < (int) N.size(); i++){
		if(i % 2 == 0){
			soma_digitos += (int) (N[i] - '0');
		}else{
			soma_digitos -= (int) (N[i] - '0');
		}
	}
	
	if(soma_digitos % 11 == 0){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
