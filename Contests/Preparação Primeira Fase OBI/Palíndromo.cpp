#include <bits/stdc++.h>

using namespace std;

#define MAXN 2010

int dp[MAXN];
int pal[MAXN][MAXN];

int N;
string s;

int palindromo(int i, int j){
	if(pal[i][j] != -1) return pal[i][j];
	if(i == j) return 1;
	if(i == j - 1) return pal[i][j] = (s[i] == s[j]);
	if(s[i] != s[j]) return pal[i][j] = 0;
	return palindromo(i + 1, j - 1);
}

int solve(int i){
	if(dp[i] != -1) return dp[i];
	if(palindromo(0, i)) return dp[i] = 1;
	int menor = MAXN;
	for(int j = i; j > 0; j--){
		if(palindromo(j, i)){
			int valor = solve(j - 1);
			menor = min(menor, valor + 1);
		}
	}
	dp[i] = menor;
	return dp[i];
}


int main(){
	
	int i = 1;
	
	while(true){
		
		cin >> N;
		
		if(N == 0) break;
		
		cin >> s;
		
		memset(dp, -1, sizeof(dp));
		memset(pal, -1, sizeof(pal));
		
		cout << "Teste " << i << endl;
		cout << solve(N - 1) << endl;
		cout << endl;
		
		i++;
	}
	return 0;
}
