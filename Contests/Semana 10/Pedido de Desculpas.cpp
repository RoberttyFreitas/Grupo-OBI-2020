#include <bits/stdc++.h>

using namespace std;

#define MAXC	1010 
#define MAXF	55

int pd[MAXF][MAXC];
int num_caracteres[MAXF];
int qtd_desulpes[MAXF];

int C, F, N, D;

int solve(int i, int c){
	if(i == F) return 0;
	if(pd[i][c] != -1) return pd[i][c];
	
	if(num_caracteres[i] <= c){
		pd[i][c] = max(solve(i + 1, c - num_caracteres[i]) + qtd_desulpes[i], solve(i + 1, c));
	}else{
		pd[i][c] = solve(i + 1, c);
	}
	
	return pd[i][c];
}

int main(){
	
	int i = 1;
	while(true){
		cin >> C >> F;
		if(C == 0 and F == 0) break;
		for(int i = 0; i < F; i++){
			cin >> num_caracteres[i] >> qtd_desulpes[i];
		}
		memset(pd, -1, sizeof(pd));
		cout << "Teste " << i << endl;
		cout << solve(0, C) << endl;
		cout << endl;
		i++;
	}
	
	return 0;
}
