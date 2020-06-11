#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int T, M, N;
	
	string a, b;
	cin >> T;
	
	while(T--){
		map<string, string> mapa;
		cin >> N >> M;
		
		getline(cin, a);
		for(int i = 0; i < N; i++){
			getline(cin, a);
			getline(cin, b);
			mapa[a] = b;
		}
		
		for(int i = 0; i < M; i++){
			getline(cin, a);
			istringstream iss(a);
			vector<string> v(istream_iterator<string>{iss}, istream_iterator<string>());
			for(int j = 0; j < (int) v.size(); j++){
				if(mapa.find(v[j]) != mapa.end()){
					cout << mapa[v[j]] << " ";
				}else{
					cout << v[j] << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}
