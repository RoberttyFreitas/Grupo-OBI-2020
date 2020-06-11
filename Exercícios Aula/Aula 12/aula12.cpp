#include <bits/stdc++.h>

using namespace std;

#define MAXN 50100

int v[MAXN];
int N;

/* 5
 * [3 -7 5 -2 3] 
 * maior = 6
 * soma = 6
 * [5 -2 3]
*/

int solve(){
	
	int soma = 0;
	int maior = 0;
	for(int i = 0; i < N; i++){
		soma = max(soma + v[i], 0);
		maior = max(maior, soma);
	}
	
	return maior;
}

int main(){
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	cout << solve() << endl;
		
	return 0;
}
