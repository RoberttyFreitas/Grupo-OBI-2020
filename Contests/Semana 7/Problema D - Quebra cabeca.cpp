#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N;
	int B, D;
	char C;
	string res = "";
	
	cin >> N;
	
	map<int, pair<char, int> > mapa;
	
	while(N--){
		cin >> B >> C >> D;
		mapa[B] = make_pair(C, D);
	}
	
	int aux = 0;
	pair<char, int> par;
	
	while(true){
		par = mapa[aux];
		res += par.first;
		aux = par.second;
		if(aux == 1) break;
	}
	
	cout << res << endl;
	
	return 0;
}
