#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, aux, total = 0;
	
	vector<bool> v(1000100, false);
	
	cin >> N;
	
	while(N--){
		cin >> aux;
		v[aux] = true;
	}
	
	for(int i = 0; i < (int) v.size(); i++){
		if(v[i]){
			total++;
		}
	}
	
	cout << total << endl;
	
	return 0;
}
