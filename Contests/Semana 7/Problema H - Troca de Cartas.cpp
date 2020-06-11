#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int A, B, aux;
	
	set<int> cartas1, cartas2;
	vector<int> v;
	
	cin >> A >> B;
	
	for(int i = 0; i < A; i++){
		cin >> aux;
		cartas1.insert(aux);
	}
	
	for(int i = 0; i < B; i++){
		cin >> aux;
		if(cartas1.find(aux) != cartas1.end()){
			v.push_back(aux);
		}else{	
			cartas2.insert(aux);
		}
	}
	
	for(int i = 0; i < (int) v.size(); i++){
		cartas1.erase(v[i]);
	}
	
	int res = min((int) cartas1.size(), (int) cartas2.size());
	
	cout << res << endl;
	
	return 0;
}
