#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, M, aux;
	vector<int> v;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> aux;
		v.push_back(aux);
	}
	
	cin >> M;
	
	for(int i = 0; i < M; i++){
		cin >> aux;
		for(int j = 0; j < N; j++){
			if(v[j] == aux){
				v[j] = -1;
				break;
			}
		}
	}
	
	for(int i = 0; i < N; i++){
		if(v[i] != -1){
			cout << v[i] << " ";
		}
	}
	cout << endl;
	
	return 0;
}
