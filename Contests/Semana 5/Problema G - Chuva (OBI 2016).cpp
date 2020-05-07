#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, aux, result = 0, fim;
	
	cin >> N;
	
	vector<int> v;
	
	while(N--){
		cin >> aux;
		v.push_back(aux);
	}
	
	int inicio = 0;
	
	for(int i = 1; i < (int) v.size(); i++){
		if(v[i] < v[inicio]) continue;
		else{
			result += ((i - 1) - inicio);
			inicio = i;
		}
	}
	
	fim = v.size() - 1;
	int i = fim - 1;
	
	while(i > inicio){
		if(v[i] >= v[fim]){
			result += (fim - (i + 1));
			fim = i;
		}
		i--;
	}
	
	if(inicio < fim)
		result += ((fim - 1) - inicio);
	
	cout << result << endl;
	
	return 0;
}
