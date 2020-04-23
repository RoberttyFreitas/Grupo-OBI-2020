#include <bits/stdc++.h>

using namespace std;



int main(){
	
	int P, S;
	int U, V;
	
	vector< pair<int, int> > v;
	
	cin >> P >> S;
	
	for(int i = 0; i < S; i++){
		cin >> U >> V;
		v.push_back(make_pair(U, V));
	}
	
	sort(v.begin(), v.end());
	
	int inicio = -1, fim = -1;
	
	for(int i = 0; i < (int) v.size(); i++){
		if(inicio == -1){
			inicio = v[i].first;
			fim = v[i].second;
			continue;
		}
		if(fim < v[i].first){
			cout << inicio << " " << fim << endl;
			inicio = v[i].first;
			fim = v[i].second;
		}else if(fim < v[i].second){
			fim = v[i].second;
		}
	}
	
	if(S > 0){
		cout << inicio << " " << fim << endl;		
	}
	
	return 0;
}
