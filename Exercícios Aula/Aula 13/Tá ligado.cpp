#include <bits/stdc++.h>

using namespace std;

#define MAXV 100010

vector<int> v[MAXV];

bool busca(int x, int y){
	for(int i = 0; i < (int) v[x].size(); i++){
		if(v[x][i] == y){
			return true;
		} 
	}
	return false;
}

int main(){
	
	int N, M, x, y, t;
	
	cin >> N >> M;
	
	for(int i = 0; i < M; i++){
		cin >> t >> x >> y;
		if(t == 0){
			cout << busca(x, y) << endl;
		}else{
			v[x].push_back(y);
			v[y].push_back(x);
		}
	}
	
	return 0;
}
