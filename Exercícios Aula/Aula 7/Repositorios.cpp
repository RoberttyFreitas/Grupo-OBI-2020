#include <bits/stdc++.h>

using namespace std;

int main(){
	
	map<int, int> mapa;
	map<int, int> mapa_aux;
	
	
	int C, N;
	int r, v;
	
	cin >> C >> N;
	
	while(C--){
		cin >> r >> v;
		mapa[r] = v;
	}
	
	while(N--){
		cin >> r >> v;
		if(mapa[r] < v){
			mapa_aux[r] = max(mapa_aux[r], v);
		}
	}
	
	map<int, int>::iterator it;
	for(it = mapa_aux.begin(); it != mapa_aux.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
	
	return 0;
}
