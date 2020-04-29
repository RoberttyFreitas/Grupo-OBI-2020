#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string N;
	
	cin >> N;
	
	int ultimo_digito = (int) (N[(int) N.size() - 1] - '0');
	
	if(ultimo_digito % 2 == 0){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	int soma_digitos = 0;
	
	for(int i = 0; i < (int) N.size(); i++){
		soma_digitos += (int) (N[i] - '0');
	}
	
	if(soma_digitos % 3 == 0){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	if(ultimo_digito % 5 == 0){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
