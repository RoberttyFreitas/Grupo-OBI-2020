#include <bits/stdc++.h>

using namespace std;

int alturas[1010];

int main(){
	
	int N, M;
	
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		cin >> alturas[i];
	}
	
	int ans = 0, aux = 0;
	
	for(int i = 0; i < N - 1; i++){
		if(alturas[i] >= M){
			aux = alturas[i] - M;
			alturas[i + 1] -= aux;
		}else{
			aux = M - alturas[i];
			alturas[i + 1] += aux;
		}
		ans += aux;
	}
	
	cout << ans << endl;
	
	return 0;
}
