#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000000

bool vetor[MAXN + 1];

void crivo(){
	for(int i = 2; i <= MAXN; i++) vetor[i] = true;
	for(int i = 2; i * i <= MAXN; i++){
		if(vetor[i]){
			for(int j = i * i; j <= MAXN; j += i){
				vetor[j] = false;
			}
		}
	}
}

int main(){
	
	int n;
	
	cin >> n;
	
	crivo();
	
	for(int i = 2; i <= n; i++){
		if(vetor[i]){
			cout << i << " ";
		}
	}
	cout << endl;
	
	return 0;
}

