#include <bits/stdc++.h>

using namespace std;

int v[1010];

bool buscabinaria(int i, int j, int valor){
	if(i == j){
		return (v[i] == valor);
	}
	int m = (i + j) / 2;
	if(v[m] > valor){
		return buscabinaria(i, m, valor);
	}else if(v[m] < valor){
		return buscabinaria(m+1, j, valor);
	}else{
		return true;
	}
}

int main(){
	
	int n, valor;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	
	cin >> valor;
	
	if(buscabinaria(0, n-1, valor)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
