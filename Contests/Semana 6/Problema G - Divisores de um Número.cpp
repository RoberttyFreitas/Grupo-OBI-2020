#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v;
	
	int N, soma = 0;
	
	cin >> N;
	
	for(int i = 1; i <= N; i++){
		if(N % i == 0){
			soma += i;
			v.push_back(i);
		}
	}
	
	cout << v.size() << " divisor(es): ";
	
	for(int i = 0; i < (int) v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	
	cout << "Soma de divisores = " << soma << endl;
	
	if(((int) v.size()) == 2){
		cout << "Primo" << endl;
	}else{
		cout << "Nao primo" << endl;
	}
	
	return 0;
}

