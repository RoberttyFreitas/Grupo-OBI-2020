#include <bits/stdc++.h>

using namespace std;

string v;

int solve(){
	
	vector<char> pilha;
	
	for(int i = 0; i < (int) v.size(); i++){
		
		vector<char>::iterator it = upper_bound(pilha.begin(), pilha.end(), v[i]);
		
		if(it == pilha.end()){
			pilha.push_back(v[i]);
		}else{
			*it = v[i];
		}
		
	}
	
	return (int) pilha.size();
}

int main(){
	
	cin >> v;
	
	cout << solve() << endl;
	
	return 0;
}
