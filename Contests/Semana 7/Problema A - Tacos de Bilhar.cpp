#include <bits/stdc++.h>

using namespace std;

int main(){
	
	set<int> tacos;
	
	int N, T, resultado = 0;
	
	cin >> N;
	
	while(N--){
		cin >> T;
		if(tacos.find(T) != tacos.end()){
			tacos.erase(T);
		}else{
			resultado += 2;
			tacos.insert(T);
		}
	}
	
	cout << resultado << endl;
	
	return 0;
}
