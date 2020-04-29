#include <bits/stdc++.h>

using namespace std;

int alg_euclides(int a, int b){
	if(a % b == 0) return b;
	return alg_euclides(b, a % b);
}

int main(){
	
	int n, resultado;
	
	cin >> n;
	
	vector<int> v (n);
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	resultado = v[0];
	
	for(int i = 1; i < n; i++){
		resultado = alg_euclides(resultado, v[i]);
	}
	
	cout << resultado << endl;
	
	return 0;
}
