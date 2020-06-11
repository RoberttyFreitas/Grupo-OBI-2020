#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, aux;
	
	vector<int> v, v_r;
	vector<int> v_order;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> aux;
		v.push_back(aux);
		v_order.push_back(aux);
	}
	
	sort(v.begin(), v.end());
	
	int cont = 0;
	for(int i = 0; i < N; i++){
		if(v[i] != v_order[i]){
			v_r.push_back(v[i]);
			cont++;
		}
	}
	
	cout << cont << endl;
	
	sort(v_r.begin(), v_r.end());
	
	if(cont > 0){
		for(int i = 0; i < (int) v_r.size(); i++){
			cout << v_r[i] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
