#include <bits/stdc++.h>

using namespace std;

bool busca(vector<int> v, int x){
	for(int i = 0; i < (int) v.size(); i++){
		if(v[i] == x){
			return true;
		}
	}
	return false;
}

int main(){
	
	int N, Q, aux;
	
	vector<int> v;
	
	cin >> N;
	
	while(N--){
		cin >> aux;
		v.push_back(aux);
	}
	
	cin >> Q;
	
	while(Q--){
		cin >> aux;
		if(busca(v, aux)){
			cout << "Sim" << endl;
		}else{
			cout << "Nao" << endl;
		}
	}
	
	return 0;
}
