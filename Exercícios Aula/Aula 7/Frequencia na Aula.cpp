#include <bits/stdc++.h>

using namespace std;

int main(){
	
	set<int> conj;
	
	int N, c;
	
	cin >> N;
	
	while(N--){
		cin >> c;
		conj.insert(c);
	}
	
	cout << conj.size() << endl;
	
	return 0;
}
