#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010

int v[MAXN];
int N;

int solve(){
	int resp = 0;
	int maior = 0;
	
	for(int i = 0; i < N; i++){
		maior = max(maior + v[i], 0);
		resp = max(resp, maior);
	}
	
	return resp;
}

int main(){
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	cout << solve() << endl;
	
	return 0;
}

