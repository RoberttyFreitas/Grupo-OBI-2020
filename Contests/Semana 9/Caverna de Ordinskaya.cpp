#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, M, maior = 0, aux;
	long long int ans = 0;
	bool valido = true;
	
	cin >> n >> M;
	
	for(int i = 0; i < n; i++){
		cin >> aux;
		if(min(aux, M - aux) >= maior){
			maior = min(aux, M - aux);
			ans += min(aux, M - aux);
		}else if(max(aux, M - aux) >= maior){
			maior = max(aux, M - aux);
			ans += max(aux, M - aux);
		}else{
			valido = false;
			break;
		}
	}
	
	if(valido){
		cout << ans << endl;
	}else{
		cout << "-1" << endl;
	}
	
	return 0;
}
