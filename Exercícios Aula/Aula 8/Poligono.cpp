#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, acum = 0, res = 0;
	
	cin >> N;
	
	vector<int> v(N);
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
		acum += v[i];
	}
	
	for(int i = 0; i < N; i++){
		if(v[i] == -1) continue;
		if(v[i] >= (acum - v[i])){
			acum -= v[i];
			v[i] = -1;
			i = -1;
			res = 0;
		}else{
			res++;
		} 
	}
	
	cout << res << endl;
	
	return 0;
} 
