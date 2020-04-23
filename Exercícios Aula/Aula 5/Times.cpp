#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, string> p1, pair<int, string> p2){
	return p1.first > p2.first;
}

int main(){
	
	int N, T, H;
	string nome;
	
	vector< pair<int, string> > v;
	
	cin >> N >> T;
	
	for(int i = 0; i < N; i++){
		cin >> nome >> H;
		v.push_back(make_pair(H, nome));
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i = 0; i < T; i++){
		vector<string> aux;
		for(int j = i; j < N; j += T){
			aux.push_back(v[j].second);
		}
		sort(aux.begin(), aux.end());
		cout << "Time " << i+1 << endl;
		for(int j = 0; j < (int) aux.size(); j++){
			cout << aux[j] << endl;
		}
		cout << endl;
	}
	
	return 0;
}
