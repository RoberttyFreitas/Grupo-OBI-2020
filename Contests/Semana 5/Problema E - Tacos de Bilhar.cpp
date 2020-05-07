#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<bool> v(1000100, false);
	
	int C, resultado = 0, aux;
	
	cin >> C;
	
	while(C--){
		cin >> aux;
		if(v[aux]){
			v[aux] = false;
		}else{
			v[aux] = true;
			resultado += 2;
		}
	}
	
	cout << resultado << endl;
	
	return 0;
}
