#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> v;
	
	int N;
	
	cin >> N;
	
	while(N > 1){
		v.push_back(N % 2);
		N = N / 2;
	}
	
	cout << N;
	for(int i = (int) v.size() - 1; i >= 0; i--){
		cout << v[i];
	}
	cout << endl;
	
	return 0;
}
