#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, aux, resposta = 0;
	
	cin >> n;
	
	while(n--){
		cin >> aux;
		resposta |= aux;
	}
	
	cout << resposta << endl;
	
	return 0;
}
