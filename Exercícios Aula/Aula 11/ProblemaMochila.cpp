#include <bits/stdc++.h>

using namespace std;

#define MAXN	1000
#define MAXPESO	1000

int M [MAXN][MAXPESO];

int v[MAXN];
int p[MAXPESO];
int N;

int solve(int i, int peso){
	if(i == N) return 0;
	
	if(M[i][peso] >= 0) return M[i][peso];
	
	if(p[i] <= peso){
		M[i][peso] = max(solve(i+1, peso - p[i]) + v[i], solve(i+1, peso));
	}else{
		M[i][peso] = solve(i+1, peso);
	}
	
	return M[i][peso];
}

/*
 * 6 10 
 * 2 2
 * 2 3
 * 2 4
 * 3 3
 * 3 4 <-
 * 4 5
 */

int main(){
	
	int peso;
	
	for(int i = 0; i < MAXN; i++){
		for(int j = 0; j < MAXPESO; j++){
			M[i][j] = -1;
		}
	}
	
	cin >> N >> peso;
	
	for(int i = 0; i < N; i++){
		cin >> p[i] >> v[i];
	}
	
	cout << solve(0, peso) << endl;
	
	return 0;
}
