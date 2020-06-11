#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000

int N;

int v[MAXN];

int solve(){
	
	vector<int> pilha;
	
	for(int i = 0; i < N; i++){
		
		vector<int>::iterator it = lower_bound(pilha.begin(), pilha.end(), v[i]);
		
		if(it == pilha.end()){
			pilha.push_back(v[i]);
		}else{
			*it = v[i];
		}
		
	}
	
	return (int) pilha.size();
}

/*
 * 5
 * [2 3 7 5 6]
*/

int main(){
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	cout << solve() << endl;
	
	return 0;
}
