#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

int v[MAXN];
int N;

long long int solve(){
	long long int resp = 0;
	long long int maior = 0;
	
	for(int i = 0; i < N; i++){
		maior = max(maior + v[i], 0ll);
		resp = max(resp, maior);
	}
	
	return resp;
}

int main(){
	
	cin >> N;
	long long int soma = 0;
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
		soma += v[i];
	}
	
	long long int res1 = solve();
	
	for(int i = 0; i < N; i++){
		v[i] = -v[i];
	}
	
	long long int res2 = soma + solve();
	
	cout << max(res1, res2) << endl;
	
	return 0;
}
